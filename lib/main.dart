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

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Mission().getMission(); // 초기 앱 실행 시 한번 수행 --> 서버에서 해당 미션 리스트 받아옴 (모바일저장)

  Timer(const Duration(seconds: 2), () {
    runApp(MyApp());
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
