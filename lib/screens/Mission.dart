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
import 'package:http/http.dart' as http;
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:path/path.dart';
import 'dart:convert';

import 'package:sqflite/sqflite.dart';

import '../models/ListeningMission.dart';

class Mission extends StatefulWidget{
  @override
  _MissionState createState() => _MissionState();

  Future<Database> createDBCamera() async{
    final database_camera = openDatabase( // db 생성
      join(await getDatabasesPath(),'camera_mission.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE camera_mission(english TEXT,completed INTEGER)",
        );
      },
      version:1,
    );
    return database_camera;
  }

  Future<Database> createDBListening() async{
    final database_listening = openDatabase( // db 생성
      join(await getDatabasesPath(),'listening_mission.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE listening_mission(english TEXT,count INTEGER)",
        );
      },
      version:1,
    );

    return database_listening;
  }


  Future<void> insertCameraMission(CameraMission camera,Database database_camera) async{ // db 삽입
    final Database db = await database_camera;

    await db.insert(
      'camera_mission',
      camera.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }
  Future<void> insertListeningMission(ListeningMission listeningMission,Database database_listening) async{ // db 삽입
    final Database db = await database_listening;

    await db.insert(
      'listening_mission',
      listeningMission.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }
  Future<List<CameraMission>> cameras(Database database_camera) async {     // db 출력
    final Database db = await database_camera;

    final List<Map<String, dynamic>> maps = await db.query('camera_mission');
    //print(maps.length);
    return List.generate(maps.length, (i) {
      return CameraMission(
        english: maps[i]['english'],
        completed: maps[i]['completed'],
      );
    });
  }

  Future<List<ListeningMission>> listenings(Database database_listening) async {     // db 출력
    final Database db = await database_listening;

    final List<Map<String, dynamic>> maps = await db.query('listening_mission');
    //print(maps.length);
    return List.generate(maps.length, (i) {
      return ListeningMission(
        english: maps[i]['english'],
        count: maps[i]['count'],
      );
    });
  }




  deleteAllCameras(Database database_camera) async {  // db 삭제
    final db = await database_camera;
    db.rawDelete('DELETE FROM camera_mission');
  }

  deleteAllListening(Database database_listening) async {  // db 삭제
    final db = await database_listening;
    db.rawDelete('DELETE FROM listening_mission');
  }

  getMission() async{


    Database dataBase_camera = await createDBCamera();
    Database database_listening = await createDBListening();

    String url = "http://54.157.224.91:8080/abeec/mission/" + "yoojinjangjang"; // {id} 부분 붙여주기
    print(url);
    Uri uri = Uri.parse(url);
    var response = await http.get(uri);
    var responseBody = utf8.decode(response.bodyBytes);
    //print(responseBody);
    String res = responseBody.toString();
    var responseJson  = jsonDecode(res);

    print("camera : " + responseJson['camera'].toString());
    List<String> camera = List<String>.from(responseJson['camera']); // camera 리스트

    print("listening : " + responseJson['listening'].toString());
    List<String> listening = List<String>.from(responseJson['listening']); //listening 리스트


    // 데이터베이스 추가 전 삭제 부분
    deleteAllCameras(dataBase_camera);
    deleteAllListening(database_listening);

    // 데이터베이스에 추가하는 부분 작성
    for(var i in camera){
      CameraMission camera = CameraMission(
        english: i,
        completed: 0,
      );
      print(camera.toString());
      await insertCameraMission(camera,dataBase_camera);
    }

    for(var i in listening){
      ListeningMission listeningMission = ListeningMission(
        english: i,
        count: 0,
      );
      print(listeningMission.toString());
      await insertListeningMission(listeningMission,database_listening);
    }


  }

}





class _MissionState extends State<Mission>{

  List<CameraMission> cameraList = List.filled(7, CameraMission(english:'',completed: 0));
  List<ListeningMission> listeningList = List.filled(3, ListeningMission(english: '',count: 0));


  @override
  initState() {


    Database database_camera; // 데이터베이스에서 영어와 학습 여부 받아오기
    Mission().createDBCamera().then((r){
      database_camera = r;
      Mission().cameras(database_camera).then((result){
        print(result);
        setState(() => cameraList = result);
      });
    });

    Database database_listening; // 데이터베이스에서 영어와 듣기 여부 받아오기
    Mission().createDBListening().then((r){
      database_listening = r;
      Mission().listenings(database_listening).then((result){
        print(result);
        setState(() => listeningList = result);
      });
    });


    super.initState();
  }
  @override
  Widget build(BuildContext context) {
    //print(" hey hey "  + missionList.toString());


    return MaterialApp(
        title: 'Flutter Layout demo',
        home: Scaffold(
            //appBar: AppBar(
             //   title: const Text('mission page')
            //),
            body: Center(
                child:SafeArea(

                    child: Column(
                    children: <Widget>[
                        SizedBox(height: 10),
                      const SizedBox(
                          height: 40,
                          child: Text(
                            "Weekly Mission",
                            style: TextStyle(fontSize: 30,fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          )),
                      const SizedBox(height: 10),
                      SizedBox(
                        height:270,
                        width :330,
                        child: Container(
                            decoration: BoxDecoration(
                                border: Border.all(
                                  width: 3,
                                  color: Colors.orange,
                                ),
                                //color: Colors.amberAccent,
                                borderRadius: BorderRadius.circular(10)    ),
                          child:
                              GridView.builder(
                              padding: const EdgeInsets.all(10),
                              gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
                              maxCrossAxisExtent: 500,
                              mainAxisExtent: 60,
                                    ),
                                itemBuilder: (context, i) => Container( // 여기서부터 리스트 요소들 !
                                            decoration: BoxDecoration(
                                              color: Colors.amberAccent,
                                              borderRadius: BorderRadius.circular(10)
                                          ),
                                          padding: const EdgeInsets.all(10),
                                          margin: const EdgeInsets.all(5),
                                            child:  Row( mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                                                children: [
                                                    Text(() {
                                                    if(i<=6){return cameraList[i].english.toString() + " 촬영하기";}
                                                    else{return listeningList[i-7].english.toString() + " 듣기";}}(),
                                                    style: const TextStyle(fontSize: 20),
                                                    textAlign: TextAlign.center,),
                                                    Icon((){
                                                      if(i<=6 && cameraList[i].completed == 0){return Icons.check_box_outline_blank;}     // 촬영 못함
                                                      else if(i<=6 && cameraList[i].completed !=0){return Icons.check_box;}               // 촬영 함
                                                      else if(listeningList[i-7].count! <= 2){return Icons.check_box_outline_blank;}      // 듣지 못함
                                                      else{return Icons.check_box;}}(),                                                   // 들음
                                                      color: Colors.white,
                                                      size:24.0,
                                                    ),
                                                    ])
                                ),
                                itemCount: 10,
                              ),

                        ),
                      ),
                      const SizedBox(height: 20,),
                      Expanded(child: Container(
                        color: Colors.amberAccent,
                        child: Center( child: Column(
                          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                          children: [
                            //const SizedBox(height: 10,),
                            const Text("장유진",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold),
                                textAlign: TextAlign.center,), // 여기에 이름 넣어주기 ( ID )
                            //이미지 동그랗게 넣기 --> https://sothecode.tistory.com/47
                            const SizedBox(height: 120,child: Center(child:Text("이미지 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold)))),
                            Row(
                                mainAxisAlignment: MainAxisAlignment.spaceEvenly,

                              children: const [
                                Text("level 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold)),
                                Text("단어 수 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold))
                              ],
                            ),
                          ],
                        ), ),
                      ) ),

                    ],
                  ) // Hands on! 여기를 아래 코드로 대체하면 된다.
                )
              )
        )
    );
  }






}
//child: GridView.builder(
//   padding: const EdgeInsets.all(10),
//   gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
//     maxCrossAxisExtent: 500,
//     mainAxisExtent: 60,
//   ),
//   // return a custom ItemCard
//   itemBuilder: (context, i) => Container(
//     decoration: BoxDecoration(
//         color: Colors.amberAccent,
//         borderRadius: BorderRadius.circular(10)
//     ),
//     padding: const EdgeInsets.all(10),
//     margin: const EdgeInsets.all(5),
//     child: Text(
//       "단어 $i",
//       style: const TextStyle(fontSize: 20),
//       textAlign: TextAlign.center,
//     ),
//   ),
//   itemCount: 10,
// ),

