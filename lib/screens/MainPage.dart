import 'package:capstone_abeec/screens/MyVocaList.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:capstone_abeec/screens/unity.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:get/get.dart';

import 'package:clickable_list_wheel_view/clickable_list_wheel_widget.dart';
import 'package:clickable_list_wheel_view/measure_size.dart';

import 'Mission.dart';

class MainPage extends StatelessWidget {
  final _scrollController = FixedExtentScrollController();

  @override
  Widget build(BuildContext context) {
    SystemChrome.setPreferredOrientations([DeviceOrientation.portraitUp]);
    return Scaffold(
        backgroundColor: Colors.yellow,
        body: SafeArea(
          child: Column(children: [
            Container(
              margin: EdgeInsets.fromLTRB(0, 50, 0, 0),
              //color: Colors.yellow,
              height: 300,
              child: Center(
                  child: Image.asset('assets/resource/logo.png',
                      width: 600, height: 400)),
              /*padding : EdgeInsets.all(20),
          child:Image.asset('assets/resource/logo.png')*/
            ),
            Container(
              margin: EdgeInsets.fromLTRB(20, 0, 20, 0),
              color: Colors.white,
              height: 325,
            )
          ]),
        ));
  }
}

/*Container(
                child: ListView(scrollDirection: Axis.horizontal, children: [
              IconButton(
                  onPressed: () {
                    Get.to(SearchVoca());
                  },
                  iconSize: 100,
                  icon: Image.asset('assets/resource/camera_button.png')),
              IconButton(
                  onPressed: () {
                    Get.to(MyVoca());
                  },
                  iconSize: 100,
                  icon: Image.asset('assets/resource/voca_button.png')),
              IconButton(
                  onPressed: () {
                    Get.to(UnityDemoScreen());
                  },
                  iconSize: 100,
                  icon: Image.asset('assets/resource/game_button.png')),
              IconButton(
                  onPressed: () {
                    Get.to(Mission());
                  },
                  iconSize: 100,
                  icon: Image.asset('assets/resource/setting_button.png')),
              IconButton(
                  onPressed: () {},
                  iconSize: 100,
                  icon: Image.asset('assets/resource/setting_button.png'))
            ]))*/
/*Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            ElevatedButton(
                onPressed: () {Get.to(SearchVoca());},
                child: Text("단어찾기")),
            ElevatedButton(
                onPressed: () {Get.to(MyVoca());},
                child: Text("내 단어장")),
            ElevatedButton(
                onPressed: () {Get.to(UnityDemoScreen());},
                child: Text("미니게임")),
            ElevatedButton(
                onPressed: () {Get.to(Mission());},
                child: Text("미션")),
          ],
        ),
      ),*/
