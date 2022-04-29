
import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:get/get_core/src/get_main.dart';

import '../screens/MyVocaDetail.dart';
import '../service/user_controller.dart';

class JoinLogin_TFF extends StatefulWidget {

  final String hint;
  final funcValidator;
  final controller;

  JoinLogin_TFF({required this.hint, this.funcValidator, this.controller});

  @override
  _JoinLogin_TFFState createState() => _JoinLogin_TFFState();
}

class _JoinLogin_TFFState extends State<JoinLogin_TFF> {
  final UserController u = Get.put(UserController());


  @override
  Widget build(BuildContext context) {
    if (widget.hint == "아이디를") {
      return Container(
        padding: const EdgeInsets.symmetric(vertical: 5),
        width: 280.0,
        child: Row(
          children: [
            Expanded(child:
            TextFormField(
                controller: widget.controller,
                validator: widget.funcValidator,
                decoration: InputDecoration(
                  hintText: "${widget.hint} 입력하시오.",
                  enabledBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                  focusedBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                  errorBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                  focusedErrorBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                )
            ),
            ),
            Container(
              margin: EdgeInsets.all(10.0),

              decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(10), //모서리를 둥글게
                color: Colors.amberAccent,),
              child: IconButton(onPressed: () async {
                  String check = await u.idCheck(widget.controller.text.trim());
                  if (check == "another id is required") {
                    print("중복");
                    await ShowDialog();
                  }
                  else{
                    await showOkDialog();
                  }
                 }, icon: Icon(Icons.check),),)

          ],),

      );
    }
    return Container(
      padding: const EdgeInsets.symmetric(vertical: 5),
      width: 280.0,
      child:
      TextFormField(
          controller: widget.controller,
          validator: widget.funcValidator,
          obscureText: widget.hint == "비밀번호를" ? true : false,

          decoration: InputDecoration(
            hintText: "${widget.hint} 입력하시오.",
            enabledBorder: OutlineInputBorder(
              borderRadius: BorderRadius.circular(20),
            ),
            focusedBorder: OutlineInputBorder(
              borderRadius: BorderRadius.circular(20),
            ),
            errorBorder: OutlineInputBorder(
              borderRadius: BorderRadius.circular(20),
            ),
            focusedErrorBorder: OutlineInputBorder(
              borderRadius: BorderRadius.circular(20),
            ),
          )
      ),
    );
  }

  ShowDialog() {
    showDialog(
        context: context,
        barrierDismissible: false,
        builder: (BuildContext context) {
          return AlertDialog(
            shape: RoundedRectangleBorder(
                borderRadius: BorderRadius.circular(20)),
            title: Column(
              children: <Widget>[
                new Text("중복된 ID"),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("다른 ID로 시도하세요."),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.back();
                  },
                  child: Text("확인")),
            ],
          );
        });
  }

  showOkDialog() {
    showDialog(
        context: context,
        barrierDismissible: false,
        builder: (BuildContext context) {
          return AlertDialog(
            shape: RoundedRectangleBorder(
                borderRadius: BorderRadius.circular(20)),
            title: Column(
              children: <Widget>[
                new Text("중복되지 않은 ID"),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("이 ID는 사용가능합니다."),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.back();
                  },
                  child: Text("확인")),
            ],
          );
        });
  }
}