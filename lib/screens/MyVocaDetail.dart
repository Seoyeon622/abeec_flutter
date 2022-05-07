import 'package:capstone_abeec/constants.dart';
import 'package:capstone_abeec/models/ListeningMissionDB.dart';
import 'package:capstone_abeec/service/MyLevel.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:flutter_tts/flutter_tts.dart';

import '../models/voca.dart';
import 'MainPage.dart';

class VocaDetail extends StatefulWidget {

  @override
  _VocaDetailState createState() => _VocaDetailState();
}

  var res = Get.arguments;
  String english = '';
  String korean = '';

  // 해당 화면에서 듣기 부분을 작성하고 들을 경우 listening_mission 테이블의 english와 비교하여 있는 경우 count를 1 증가 시키기
class _VocaDetailState extends State<VocaDetail> {
  final FlutterTts flutterTts = FlutterTts();
  TextEditingController controller = TextEditingController();
  String imagePath = '';
  @override
  void initState() {
    res = Get.arguments;
    if(res.runtimeType == Voca){
      Voca voca = res as Voca;
      setState(() {
        english = voca.english!;
        korean = voca.korean!;
      });

    }else{
      setState(() {
        english = res['english'];
        korean = res['korean'];
      });

    }
    // imagePath = "assets/images/"+res['english'].toString() + ".jpg";
    //  controller = TextEditingController(text: res['english']);
    imagePath = "assets/images/"+english + ".jpg";
    controller = TextEditingController(text: english);
     flutterTts.setLanguage('en');
     flutterTts.setSpeechRate(0.4);


    super.initState();
  }


  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: kPrimaryColor,
      // appBar: AppBar(
      //   title: Text("단어 상세 화면"),
      // ),
      body: Center(

        child: Column(

          mainAxisAlignment: MainAxisAlignment.center,
          children: [ Align(
            alignment: Alignment.topLeft,
            child: IconButton(
              onPressed: ()  {
                Get.off(()=>MainPage());
              },
              icon: const Icon(Icons.arrow_back, size: 40.0),
            )),
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
                   const SizedBox(height: 35.0,),
                  Text(english, style: TextStyle(fontFamily: "NotoSansKR",fontSize: 40,fontWeight: FontWeight.bold),),
                  Text(korean, style: TextStyle(fontFamily: "NotoSansKR",fontSize: 38, fontWeight: FontWeight.bold),),
                  const SizedBox(height: 20.0,),
                  RawMaterialButton(onPressed: (){
                    flutterTts.speak(controller.text);
                    // ListeningMissionDB().listeningUpdate(res['english'].toString());
                    ListeningMissionDB().listeningUpdate(english);
                  },
                      fillColor: kPrimaryColor,
                      elevation: 2.0,
                      shape: const CircleBorder(),
                      padding: const EdgeInsets.all(10.0),
                      child: const Icon(
                          Icons.volume_up,size:50.0,
                          color:Colors.white))
             ] ))],
        ),
      ),
    );
  }
}
