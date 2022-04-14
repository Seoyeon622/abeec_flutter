import 'package:capstone_abeec/screens/MyVocaList.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';

class MainPage extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("메인 화면"),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            ElevatedButton(
                onPressed: () {Get.to(SearchVoca());},
                child: Text("단어찾기")),
            ElevatedButton(
                onPressed: () {Get.to(MyVoca());},
                child: Text("내 단어장")),
          ],
        ),
      ),
    );
  }
}