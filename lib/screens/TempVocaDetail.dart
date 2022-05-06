import 'dart:convert';

import 'package:capstone_abeec/models/ListeningMissionDB.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:capstone_abeec/service/MyLevel.dart';
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
      backgroundColor: Color(0xffF8E77F),
      // appBar: AppBar(
      //   title: Text("단어 상세 화면"),
      // ),
      body: Center(

        child: Column(

          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            const Center(
                child: Image(image:AssetImage('assets/resource/bee.png'),height: 150.0,)
            ),
            Container(
                margin: EdgeInsets.fromLTRB(0,20, 0, 0),
                padding: EdgeInsets.fromLTRB(10, 10, 10, 20),
                color: Colors.white,
                width: 350.0,
                height: 500.0,

                child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Image(image:AssetImage(imagePath)),
                      const SizedBox(height: 25.0,),
                      Text(english, style: TextStyle(fontSize: 40,fontWeight: FontWeight.bold),),
                      Text(korean, style: TextStyle(fontSize: 38),),
                      const SizedBox(height: 20.0,),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                        children:[
                          ElevatedButton(onPressed: () { saveDB(); },
                              style: ElevatedButton.styleFrom(
                                primary: Color(0xffFEE134),
                                onPrimary: Colors.black,
                                textStyle: const TextStyle(fontSize: 15),
                                fixedSize: Size(100,100),
                                elevation: 10,
                                shape: new RoundedRectangleBorder(
                                  borderRadius: new BorderRadius.circular(20.0),
                                ),
                              ),
                              child:Column(
                                mainAxisAlignment: MainAxisAlignment.center,
                                children: const [
                                  Icon(Icons.check_circle,size: 50),
                                  Text(
                                    "저장해",
                                    style: TextStyle(fontFamily: 'DoHyeonRegular'),
                                  )
                                ],
                              ), ),
                          ElevatedButton(onPressed: () {
                                 Get.to(() => SearchVoca());},
                            style: ElevatedButton.styleFrom(
                              primary: Color(0xffFEE134),
                              onPrimary: Colors.black,
                              textStyle: const TextStyle(fontSize: 15),
                              fixedSize: Size(100, 100),
                              elevation: 10,
                              shape: new RoundedRectangleBorder(
                                borderRadius: new BorderRadius.circular(20.0),
                              ),
                            ),
                            child:Column(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: const [
                                Icon(Icons.cancel,size: 50),
                                Text(
                                  "저장안해",
                                  style: TextStyle(fontFamily: 'DoHyeonRegular'),
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
