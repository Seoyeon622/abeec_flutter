import 'dart:async';
import 'dart:convert';
import 'dart:io';

import 'package:capstone_abeec/screens/JoinPage.dart';
import 'package:capstone_abeec/screens/LoginPage.dart';
import 'package:capstone_abeec/screens/MainPage.dart';
import 'package:capstone_abeec/screens/Mission.dart';
import 'package:flutter/material.dart';
import 'package:get/get_navigation/src/root/get_material_app.dart';
import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';
import 'package:http/http.dart' as http;
import 'models/CameraMission.dart';
import 'models/CameraMissionDB.dart';
import 'models/ListeningMission.dart';
import 'models/ListeningMissionDB.dart';
import 'models/loginUserDB.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await CameraMissionDB().fixed_camera_database;
  await ListeningMissionDB().fixed_listening_database;
  await loginUserDB().fixed_loginUser_database;
  await CameraMissionDB().init();
 // await Mission().getMissions();

   Timer(const Duration(seconds: 2), () {
  runApp(MyApp());
 // runApp(JoinPage());
   });

  //runApp(MyApp());

  //Timer.periodic(Duration(seconds:30), (timer) {
    //  Mission().getMission();  //
  //});
  HttpOverrides.global = new MyHttpOverrides();
}

class MyApp extends StatelessWidget {


  @override
  Widget build(BuildContext context) {

    return GetMaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'ABeeC',
      theme: ThemeData(primarySwatch: Colors.amber),
      home: MainPage(),
    );
  }
}

//안쓰면 'Connection closed before full header was received' 에러 발생
class MyHttpOverrides extends HttpOverrides {
  @override
  HttpClient createHttpClient(SecurityContext? context) {
    return super.createHttpClient(context)
      ..maxConnectionsPerHost = 5;
  }
}
