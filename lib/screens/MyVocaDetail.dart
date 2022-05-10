import 'dart:convert';
import 'dart:io';
import 'dart:math';
import 'dart:ui';

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
      appBar: AppBar(
        title: const Text(
          "My Voca Detail", style: TextStyle(color: Colors.white, fontSize: 28.0,
            fontFamily: 'GmarketSans', fontWeight: FontWeight.bold),
        ),
        leading: IconButton(
          icon: Icon(Icons.arrow_back, color: Colors.white,),onPressed: (){
          Navigator.pop(context);
        },
        ),
        backgroundColor: kPrimaryColor, centerTitle: true, elevation: 0.0,

      ),
      body: SafeArea(

        child: Stack(

          //mainAxisAlignment: MainAxisAlignment.center,
          children: [
            // Align(
            // alignment: Alignment.topLeft,
            // child: IconButton(
            //   onPressed: ()  {
            //     Get.off(()=>MainPage());
            //   },
            //   icon: const Icon(Icons.arrow_back, size: 40.0),
            // )
            // ),
            // Container(
            //     // margin: EdgeInsets.fromLTRB(0,20, 0, 0),
            //     // padding: EdgeInsets.fromLTRB(10, 10, 10, 20),
            //     // color: Colors.white,
            //     // width: 350.0,
            //     // height: 600.0,
            //   child:
              Container(
                padding: EdgeInsets.all(10),
                height: 750,
                width: 400,
                child: CustomPaint(
                  painter: BubblePainter(),
                ),
              ),
             //  child:
        Container(
        //   alignment: Alignment.center,
        //  // width: 450, height: 400,
        //  // color: Colors.pink,
          padding: EdgeInsets.only(top:50),
          child:
          Column(
              //  mainAxisAlignment: MainAxisAlignment.center,
                // crossAxisAlignment: CrossAxisAlignment.center,
                children: [
                  Text("\"따라 읽어볼까요?\"", style: TextStyle(backgroundColor: Color(0xFFc7e6f9),fontSize: 35,fontWeight: FontWeight.bold,fontFamily: "GmarketSans")),
                  const SizedBox(height: 20.0,),
                  Image(image:AssetImage(imagePath),width: 350, height: 250,),
                  Center(
                    child : Column(
                      children:[
                  Text(english, style: TextStyle(fontFamily: "NotoSansKR",fontSize: 40,fontWeight: FontWeight.bold),),
                  Text(korean, style: TextStyle(fontFamily: "NotoSansKR",fontSize: 38, fontWeight: FontWeight.bold),),]
                    ),
                  ),
                 const SizedBox(height: 10.0,),
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
                          color:Colors.white)),
                  Center(
                      child : Container(
                          padding: EdgeInsets.only(top: 50),
                          child: Image.asset("assets/resource/cute_bee.png", width: 100,height: 100,)
                      ))
             ]
              )
    )
          //  )
          ],
        ),
      ),
    );
  }
}

class BubblePainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    final bubbleSize = Size(size.width, size.height * 0.8);
    final tailSize = Size(size.width * 0.3, size.height - bubbleSize.height);
    final fillet = bubbleSize.width * 0.15; // 말풍선 얼마나 둥글게 할 지
    final tailStartPoint = Point(size.width * 0.5, bubbleSize.height*0.85); // 말풍선 위치 및 두께조절
    //bubble body
    final bubblePath = Path()
      ..moveTo(0, fillet)
    // 왼쪽 위에서 왼쪽 아래 라인
      ..lineTo(0, bubbleSize.height - fillet)
      ..quadraticBezierTo(0, bubbleSize.height, fillet, bubbleSize.height)
    // 왼쪽 아래에서 오른쪽 아래 라인
      ..lineTo(bubbleSize.width - fillet, bubbleSize.height)
      ..quadraticBezierTo(bubbleSize.width, bubbleSize.height, bubbleSize.width,
          bubbleSize.height - fillet)
    // 오른쪽 아래에서 오른쪽 위 라인
      ..lineTo(bubbleSize.width, fillet)
      ..quadraticBezierTo(bubbleSize.width, 0, bubbleSize.width - fillet, 0)
    // 오른쪽 위에서 왼쪽 아래 라인
      ..lineTo(fillet, 0)
      ..quadraticBezierTo(0, 0, 0, fillet);
    // bubble tail
    final tailPath = Path()
      ..moveTo(tailStartPoint.x, tailStartPoint.y)
      ..cubicTo(
        tailStartPoint.x + (tailSize.width * 0.2),
        tailStartPoint.y,
        tailStartPoint.x + (tailSize.width * 0.6),
        tailStartPoint.y + (tailSize.height * 0.2),
        tailStartPoint.x + tailSize.width / 2, // 목적지 x
        tailStartPoint.y + tailSize.height, // 목적지 y
      )
      ..cubicTo(
        (tailStartPoint.x + tailSize.width / 2) + (tailSize.width * 0.2),
        tailStartPoint.y + tailSize.height,
        tailStartPoint.x + tailSize.width,
        tailStartPoint.y + (tailSize.height * 0.3),
        tailStartPoint.x + tailSize.width, // 목적지 x
        tailStartPoint.y, // 목적지 y
      );
    // add tail to bubble body
    bubblePath.addPath(tailPath, Offset(0, 0));
    // paint setting
    final paint = Paint()
      ..color = Colors.white
      ..style = PaintingStyle.fill;
    // draw
    canvas.drawPath(bubblePath, paint);
  }
  @override
  bool shouldRepaint(CustomPainter oldDelegate) => false;
}