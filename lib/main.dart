import 'dart:async';
import 'dart:convert';
import 'dart:io';

import 'package:capstone_abeec/screens/LoginPage.dart';
import 'package:capstone_abeec/screens/MainPage.dart';
import 'package:capstone_abeec/screens/Mission.dart';
import 'package:flutter/material.dart';
import 'package:get/get_navigation/src/root/get_material_app.dart';
import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';
import 'package:http/http.dart' as http;
import 'models/CameraMission.dart';
import 'models/ListeningMission.dart';

void main() {
  runApp(MyApp());
  Timer.periodic(Duration(seconds:15), (timer) {
      Mission().getMission();  // 15초마다 한번씩 갱신
  });
  HttpOverrides.global = new MyHttpOverrides();
}

class MyApp extends StatelessWidget {


  @override
  Widget build(BuildContext context) {

    return GetMaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'ABeeC',
      theme: ThemeData(primarySwatch: Colors.blue),
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
