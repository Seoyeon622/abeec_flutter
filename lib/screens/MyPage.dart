import 'package:flutter/cupertino.dart';

import 'dart:async';
import 'dart:developer';
import 'package:capstone_abeec/constants.dart';
import 'package:capstone_abeec/models/CameraMission.dart';
import 'package:capstone_abeec/models/voca.dart';
import 'package:capstone_abeec/models/voca_db.dart';
import 'package:get/get.dart';
import 'package:get/get_core/src/get_main.dart';
import 'package:http/http.dart' as http;
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:percent_indicator/circular_percent_indicator.dart';

import 'dart:convert';

import '../models/CameraMissionDB.dart';
import '../models/ListeningMission.dart';
import '../models/ListeningMissionDB.dart';
import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import 'LoginPage.dart';

class MyPage extends StatefulWidget{

  @override
  _MyPageState createState() => _MyPageState();

}


class _MyPageState extends State<MyPage> {
  List<CameraMission> cameraList =
  List.filled(7, CameraMission(english: '', completed: 0));
  List<ListeningMission> listeningList =
  List.filled(3, ListeningMission(english: '', count: 0));
  List<String> camera = List.filled(7, '');

  CameraMissionDB cameraMissionDB = CameraMissionDB();
  ListeningMissionDB listeningMissionDB = ListeningMissionDB();


  getDB() async {
    List<CameraMission> cameraLists = await cameraMissionDB.cameras();
    print(cameraLists.toString());
    if (cameraLists.length < 7) {
      cameraLists = List.filled(7, CameraMission(english: '', completed: 0));
    }
    List<ListeningMission> listeningLists =
    await listeningMissionDB.listenings();
    print(listeningLists.toString());
    if (listeningLists.length < 3) {
      listeningLists = List.filled(3, ListeningMission(english: '', count: 0));
    }

    setState(() {
      cameraList = cameraLists;
      listeningList = listeningLists;
    });
  }

  loginUser? user = loginUser();
  // String? userId = '';
  //String level = '0';
  int? score;
  int exp =0;
  int? level;
  int per =0;
  double ratio=0;
  String userId = "";
  @override
  initState() {
    Future.delayed(Duration.zero, () async {
      //your async 'await' codes goes here
      await cameraMissionDB.fixed_camera_database;
      await listeningMissionDB.fixed_listening_database;
      user = await loginUserDB().user();
      userId = user?.user_id??"";
      level = user?.level??0;
      score = user?.score??0;
      exp = (6 + 4*(level!-1));
      ratio = (score!/exp);
      per = (ratio*100).toInt();

      await getDB();

    });
    setState(() {
      level = user?.level??0;
      score = user?.score??0;
      exp = (6 + 4*(level!-1));
      ratio = (score!/exp);
      per = (ratio*100).toInt();
    });
    super.initState();
  }

  @override
  Widget build(BuildContext context) {


    return Scaffold(
      appBar: AppBar(
        title: const Text(
          "My page", style: TextStyle(
          fontSize: 28.0,
          color: Colors.white,
          fontFamily: 'GmarketSans',
          fontWeight: FontWeight.bold,),
        ),
        backgroundColor: kPrimaryColor, centerTitle: true, elevation: 0.0,
          leading: IconButton(
            icon: Icon(Icons.arrow_back, color: Colors.white,),onPressed: (){
            Navigator.pop(context);
          },
          ),
        actions: [
          IconButton(
            onPressed: (){Get.to(LoginPage());},
            icon: Icon(Icons.logout,size:25.0, color: Colors.white,),
          )
        ],
      ),
        body: SafeArea(
          child: Column(children: [
            const SizedBox(height: 40.0,),
            Text(userId + " 님의", style: TextStyle(fontFamily: "GmarketSans",fontSize: 37, fontWeight:FontWeight.bold),textAlign: TextAlign.center,),
            const SizedBox(height: 20.0,),
            Text("학습현황이에요!", style: TextStyle(fontFamily: "GmarketSans",fontSize: 37, fontWeight:FontWeight.bold),textAlign: TextAlign.center,),

            //Align(alignment: Alignment.centerRight, child:
            //   Container(
            //     margin: EdgeInsets.all(10.0),
            //     decoration: BoxDecoration(
            //       color: Colors.white,
            //       borderRadius: BorderRadius.circular(50),
            //     ),
            //     child:IconButton(
            //       onPressed: (){Get.to(LoginPage());},
            //       icon: Icon(Icons.logout,size:25.0),
            //     )
            // ),
    //),
      Container(
        child: Stack(alignment: Alignment.center, children: [
          CircularPercentIndicator(
            progressColor: kPrimaryColor, animation: true,
          circularStrokeCap: CircularStrokeCap.round,
          percent: ratio, lineWidth: 30,radius: 300),
          Container(

              child: Center(
                  child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                children: [
                  //const SizedBox(height: 10,),
                  /*Text(
                    "$per %",
                    style: TextStyle(
                        fontSize: 25, fontWeight: FontWeight.bold),
                    textAlign: TextAlign.center,
                  ),*/
                  // 여기에 이름 넣어주기 ( ID )
                  //이미지 동그랗게 넣기 --> https://sothecode.tistory.com/47
                  SizedBox(
                      height: 200,
                      child: Center(
                        child: Image.asset(
                            "assets/resource/bee" + level.toString() + ".png"),
                      ))
                ],
              ))),
      //  ]),
       // Expanded(
            //child:
            Container(
            padding: EdgeInsets.only(top:400),
          child: Center(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                //const SizedBox(height: 10,),
                Text("Level.$level  $per %",
                  style:
                      TextStyle(fontSize: 35, fontFamily: "GmarketSans",fontWeight: FontWeight.bold),
                  textAlign: TextAlign.center,
                ), // 여기에 이름 넣어주기 ( ID )
                //이미지 동그랗게 넣기 --> https://sothecode.tistory.com/47
              ],
            ),
          ),
        )
        //),
        ]
      ),
      )]
      )
        )
    );
  }
}