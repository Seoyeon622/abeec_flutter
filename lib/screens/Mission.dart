/*
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class Mission extends StatefulWidget{
  @override
  _MissionState createState() => _MissionState();

}

class _MissionState extends State<Mission>{


  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        title: 'Flutter Layout demo',
        home: Scaffold(
            appBar: AppBar(
                title: Text('Flutter material layout demo')
            ),
            body: Center(
                child: Column(
                    children: <Widget>[
                      new Expanded(
                        child: GridView.count(crossAxisCount: 2,
                            children: List<Widget>.generate(2, (idx) {
                              return Container(
                                decoration: BoxDecoration(
                                    color: Colors.amberAccent,
                                    borderRadius: BorderRadius.circular(10)
                                ),
                                padding: const EdgeInsets.all(60),
                                margin: const EdgeInsets.all(10),
                                child: Text(
                                  "단어 $idx",
                                  style: TextStyle(fontSize: 20),
                                  textAlign: TextAlign.center,
                                ),
                              );

                            }).toList()),
                      ),
                      new Text("text")
                    ]
                ) // Hands on! 여기를 아래 코드로 대체하면 된다.
            )
        )
    );
  }






}*/
import 'dart:async';
import 'dart:developer';
import 'package:capstone_abeec/models/CameraMission.dart';
import 'package:capstone_abeec/models/voca.dart';
import 'package:capstone_abeec/models/voca_db.dart';
import 'package:http/http.dart' as http;
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

import 'dart:convert';

import '../models/CameraMissionDB.dart';
import '../models/ListeningMission.dart';
import '../models/ListeningMissionDB.dart';
import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import '../service/MyLevel.dart';
import 'package:percent_indicator/percent_indicator.dart';


class Mission extends StatefulWidget {
  @override
  _MissionState createState() => _MissionState();

  getMissions() async {
    await _MissionState().getMission();
  }
}

class _MissionState extends State<Mission> {
  List<CameraMission> cameraList =
      List.filled(7, CameraMission(english: '', completed: 0));
  List<ListeningMission> listeningList =
      List.filled(3, ListeningMission(english: '', count: 0));
  List<String> camera = List.filled(7, '');

  CameraMissionDB cameraMissionDB = CameraMissionDB();
  ListeningMissionDB listeningMissionDB = ListeningMissionDB();


  getMission() async{
    user = await loginUserDB().user();
    String name = user?.user_id??"id";


    String url =
        "http://54.157.224.91:8080/abeec/mission/" + name; // {id} 부분 붙여주기
    print(url);
    Uri uri = Uri.parse(url);
    var response = await http.get(uri);
    var responseBody = utf8.decode(response.bodyBytes);
    //print(responseBody);
    String res = responseBody.toString();
    var responseJson = jsonDecode(res);

    print("camera : " + responseJson['camera'].toString());
    camera = List<String>.from(responseJson['camera']); // camera 리스트

    print("listening : " + responseJson['listening'].toString());
    List<String> listening =
        List<String>.from(responseJson['listening']); //listening 리스트

    //기존에 저장된 데이터베이스와 동일한지 검사하여 동일한 경우 해당 데이터베이스를 유지해준다.
    var before = await cameraMissionDB.cameras();
    int i = 0;

    for (var element in before) {
      if (element.english.toString() != camera[i].trim()) {
        // 이전 내용에서 갱신 된 경우에
        print(element.english.toString() + " : " + camera[i]);

        await cameraMissionDB.deleteAllCameras();
        await listeningMissionDB.deleteAllListening();

        // 데이터베이스에 추가하는 부분 작성
        for (var i in camera) {
          CameraMission camera = CameraMission(
            english: i.trim(),
            completed: 0,
          );
          await cameraMissionDB.insertCameraMission(camera);
        }
        for (var i in listening) {
          ListeningMission listeningMission = ListeningMission(
            english: i.trim(),
            count: 0,
          );
          await listeningMissionDB.insertListeningMission(listeningMission);
        }
        break;
      }

      i++;
    }

    // setState(() {
    //   getDB();
    // });

  }

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


  @override
  initState() {
    Future.delayed(Duration.zero, () async {
      //your async 'await' codes goes here
      await cameraMissionDB.fixed_camera_database;
      await listeningMissionDB.fixed_listening_database;
      user = await loginUserDB().user();
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
    //level = user?.level.toString() ?? "1";
    // level = user?.level;
    // score = user?.score;
    // exp = (6 + 4*(level!-1));
    // ratio = (score!/exp!);
    // per = (ratio!*100).toInt();

    return MaterialApp(
        title: 'Flutter Layout demo',
        home: Scaffold(
            body: Center(
                child: SafeArea(
                    child: Column(
          children: <Widget>[
            SizedBox(
                height: 10,
                child: Align(
                    alignment: Alignment.centerRight,
                    child: IconButton(
                      onPressed: () async {
                        await getMission();

                      },
                      icon: const Icon(Icons.refresh, size: 40.0),
                    ))),
            const SizedBox(
                height: 40,
                child: Text(
                  "Weekly Mission",
                  style: TextStyle(fontSize: 30, fontWeight: FontWeight.bold),
                  textAlign: TextAlign.center,
                )),
            const SizedBox(height: 10),
            SizedBox(
              height: 270,
              width: 330,
              child: Container(
                decoration: BoxDecoration(
                    border: Border.all(
                      width: 4,
                      color: Colors.orange,
                    ),
                    //color: Colors.amberAccent,
                    borderRadius: BorderRadius.circular(10)),
                child: GridView.builder(
                  padding: const EdgeInsets.all(10),
                  gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
                    maxCrossAxisExtent: 500,
                    mainAxisExtent: 60,
                  ),
                  itemBuilder: (context, i) => Container(
                      // 여기서부터 리스트 요소들 !
                      decoration: BoxDecoration(
                        color: Colors.amberAccent,
                        borderRadius: BorderRadius.circular(10),
                      ),
                      padding: const EdgeInsets.all(10),
                      margin: const EdgeInsets.all(5),
                      child: Row(
                          mainAxisAlignment: MainAxisAlignment.spaceBetween,
                          children: [
                            Text(
                              () {
                                if (cameraList.length == 10) {
                                  return cameraList[i].english.toString() +
                                      "촬영하기";
                                } else {
                                  if (i <= 6) {
                                    return cameraList[i].english.toString() +
                                        " 촬영하기 ";
                                  } else {
                                    return listeningList[i - 7]
                                            .english
                                            .toString() +
                                        " 듣기 ";
                                  }
                                }
                              }(),
                              style: const TextStyle(
                                fontSize: 20,
                              ),
                              textAlign: TextAlign.center,
                            ),
                            Icon(
                              () {
                                if (cameraList.length == 10) {
                                  if (cameraList[i].completed == 0) {
                                    return Icons.check_box_outline_blank;
                                  } else {
                                    return Icons.check_box;
                                  }
                                } else {
                                  if (i <= 6 && cameraList[i].completed == 0) {
                                    return Icons.check_box_outline_blank;
                                  } // 촬영 못함
                                  else if (i <= 6 &&
                                      cameraList[i].completed != 0) {
                                    return Icons.check_box;
                                  } // 촬영 함
                                  else if (listeningList[i - 7].count! <= 2) {
                                    return Icons.check_box_outline_blank;
                                  } // 듣지 못함
                                  else {
                                    return Icons.check_box;
                                  }
                                }
                              }(), // 들음
                              color: Colors.white,
                              size: 24.0,
                            ),
                          ])),
                  itemCount: 10,
                ),
              ),
            ),
            const SizedBox(
              height: 20,
            ),
            Stack(alignment: Alignment.center, children: [
              CircularPercentIndicator(
                progressColor: Colors.orange,
                //backgroundColor: Colors.green,
                  animation: true,
              percent: ratio,
              lineWidth: 20
              ,radius: 290),
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
                  )))
            ]),
            Expanded(
                child: Container(

              child: Center(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: [
                    //const SizedBox(height: 10,),
                    Text("Lev.$level    $per %",
                      style:
                          TextStyle(fontSize: 25, fontWeight: FontWeight.bold),
                      textAlign: TextAlign.center,
                    ), // 여기에 이름 넣어주기 ( ID )
                    //이미지 동그랗게 넣기 --> https://sothecode.tistory.com/47
                  ],
                ),
              ),
            )),
          ],
        ) // Hands on! 여기를 아래 코드로 대체하면 된다.
                    ))));
  }
}
