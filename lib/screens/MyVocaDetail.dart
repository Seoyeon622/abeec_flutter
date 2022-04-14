import 'package:flutter/material.dart';
import 'package:get/get.dart';

class VocaDetail extends StatefulWidget {

  @override
  _VocaDetailState createState() => _VocaDetailState();
}

  var res = Get.arguments;


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
