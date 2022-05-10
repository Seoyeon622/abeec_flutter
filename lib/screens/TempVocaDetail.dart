import 'dart:convert';

import 'package:capstone_abeec/constants.dart';
import 'package:capstone_abeec/models/ListeningMissionDB.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:capstone_abeec/service/MyLevel.dart';
import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:flutter_tts/flutter_tts.dart';
import 'package:http/http.dart' as http;

import '../models/CameraMissionDB.dart';
import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import '../models/voca.dart';
import '../models/voca_db.dart';
import 'MyVocaDetail.dart';

class TempVocaDetail extends StatefulWidget {

  @override
  _TempVocaDetail createState() => _TempVocaDetail();
}




var result = Get.arguments;
String english = '';
String korean = '';
String? userId = '';

class _TempVocaDetail extends State<TempVocaDetail> {
  
   saveDB() async{
    Uri url = Uri.parse('http://54.157.224.91:5000/save');
    http.Response response = await http.post(
      url,
      headers: <String, String>{
        'Content-Type': 'application/json; charset=UTF-8',
      },
      body: jsonEncode({
        'id': userId.toString(), // 전역변수  id 넣어주기
        'english':english.toString(),
        'korean':korean.toString()
      }),
    );
    print(userId.toString() + "     " + english + "    " + korean);
    var responseBody = utf8.decode(response.bodyBytes);
    print(responseBody);
    String ponse = responseBody.toString();
    res = jsonDecode(ponse);
    Voca voca = Voca(english:res['english'].toString(),korean: res['korean'].toString());
    voca_db().insertVoca(voca);
    CameraMissionDB().cameraUpdate(res['english']);
    MyLevel().getScore(2);
    return await Get.to(() => VocaDetail(), arguments: res);
    
  }
  
  
  
  final FlutterTts flutterTts = FlutterTts();
  TextEditingController controller = TextEditingController();
  String imagePath = '';
  @override
  void initState() {
    result = Get.arguments;
    Future.delayed(Duration.zero,() async {
      loginUser? user = await loginUserDB().user();
      userId = user?.user_id;

    });
      setState(() {
        english = result['english'];
        korean = result['korean'];
      });

    imagePath = "assets/images/"+english + ".jpg";


    super.initState();
  }


  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: kPrimaryColor,
      appBar: AppBar(
      title: Text("My Voca", style: TextStyle(fontSize: 25.0, color: Colors.white,fontFamily: 'GmarketSans',fontWeight: FontWeight.bold,),),
        leading: IconButton(
            icon: Icon(Icons.arrow_back),
            color: Colors.white,onPressed: (){
            Navigator.pop(context);
          },
          ),
        backgroundColor: kPrimaryColor, centerTitle: true, elevation: 0.0,
      ),

      body: Center(

        child: Column(

          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            // const Center(
            //     child: Image(image:AssetImage('assets/resource/cute_bee.png'),height: 60.0,)
            // ),
            Container(
                margin: EdgeInsets.fromLTRB(0,5, 0, 0),
                padding: EdgeInsets.fromLTRB(10, 5, 10, 20),

                //color: Colors.white,
                width: 370.0,
                height: 620.0,
                decoration: BoxDecoration(
                    color: Colors.white,
                    borderRadius: BorderRadius.circular(60.0),
                    boxShadow: [
                      BoxShadow(color: Colors.grey, offset: Offset(
                          0.0, 1.0), blurRadius: 6.0,)
                    ]

                ),
                child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Image(image:AssetImage(imagePath)),
                      const SizedBox(height: 20.0,),
                      Text(english, style: TextStyle(fontFamily: "GmarketSans",fontSize: 35,fontWeight: FontWeight.bold),),
                      Text(korean, style: TextStyle(fontFamily: "GmarketSans",fontSize: 33),),
                      const SizedBox(height: 40.0,),
                      //Text("단어를 단어장에", style: TextStyle(backgroundColor: Color(0xFFc7e6f9),fontFamily: "GmarketSans",fontSize: 38, fontWeight:FontWeight.bold),textAlign: TextAlign.center,),
                      // Text("단어장에 저장할까요?", style: TextStyle(backgroundColor: Color(0xFFc7e6f9),fontFamily: "GmarketSans",fontSize: 35, fontWeight:FontWeight.bold),textAlign: TextAlign.center,),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children:[
                          ElevatedButton(onPressed: () { saveDB(); },
                              style: ElevatedButton.styleFrom(
                                primary: Colors.white,
                                onPrimary: Colors.black,
                                textStyle: const TextStyle(fontSize: 15, fontFamily: "GmarketSans"),
                                fixedSize: Size(170,90),
                                elevation: 5,
                                shape: new RoundedRectangleBorder(
                                  borderRadius: new BorderRadius.circular(40.0),
                                ),
                              ),
                              child:Column(
                                mainAxisAlignment: MainAxisAlignment.center,
                                children: const [
                                  Icon(Icons.check,size: 30, color: Colors.lightGreen,),
                                  Text(
                                    "단어 저장",
                                    style: TextStyle(fontFamily: 'GmarketSans', fontWeight: FontWeight.bold,fontSize: 25),
                                  )
                                ],
                              ), ),
                          ElevatedButton(onPressed: () {
                                 Get.to(() => SearchVoca());},
                            style: ElevatedButton.styleFrom(
                              primary: Colors.white,
                              onPrimary: Colors.black,
                              textStyle: const TextStyle(fontSize: 15, fontFamily: 'GmarketSans',),
                              fixedSize: Size(170, 90),
                              elevation: 5,
                              shape: new RoundedRectangleBorder(
                                borderRadius: new BorderRadius.circular(40.0),
                              ),
                            ),
                            child:Column(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: const [
                                Icon(Icons.replay_rounded,size: 30, color: Colors.green,),
                                Text(
                                  "다시 찍기",
                                  style: TextStyle(fontFamily: 'GmarketSans', fontWeight: FontWeight.bold,fontSize: 25),
                                )
                              ],
                            ), )
                        ],
                      )
                    ] ))],
        ),
      ),
    );
  }
}
