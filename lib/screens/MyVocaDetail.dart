import 'package:flutter/material.dart';
import 'package:get/get.dart';

class VocaDetail extends StatefulWidget {

  @override
  _VocaDetailState createState() => _VocaDetailState();
}

  var res = Get.arguments;

  // 해당 화면에서 듣기 부분을 작성하고 들을 경우 listening_mission 테이블의 english와 비교하여 있는 경우 count를 1 증가 시키기
class _VocaDetailState extends State<VocaDetail> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("단어 상세 화면"),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(res['english'], style: TextStyle(fontSize: 40),),
            Text(res['korean'], style: TextStyle(fontSize: 40),),
            //FloatingActionButton(onPressed: () {}, child: Icon(Icons.headset),),
            //FloatingActionButton(onPressed: () {}, child: Icon(Icons.notes),),
          ],
        ),
      ),
    );
  }
}
