import 'package:capstone_abeec/models/CameraMissionDB.dart';
import 'package:capstone_abeec/screens/JoinPage.dart';
import 'package:capstone_abeec/screens/MainPage.dart';
import 'package:capstone_abeec/utils/validator.dart';
import 'package:capstone_abeec/widgets/joinlogin_tff.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';

import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import '../models/voca_db.dart';
import '../service/user_controller.dart';
import 'Mission.dart';

class LoginPage extends StatefulWidget {
  @override
  _LoginPageState createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {
  final _password = TextEditingController();

  final _id = TextEditingController();

  final _formKey = GlobalKey<FormState>();

  final UserController u = Get.put(UserController());

  @override
  void initState() {
    loginUserDB().init();

    //voca_db().deleteAllvoca();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {

    return Scaffold(

      body: ListView(
        children: [
          Container(
            alignment: Alignment.center,
            height: 200,
            child: Text("ABeeC", style: TextStyle(fontSize: 40,)),
          ),
          _loginForm(),
        ],
      ),
    );
  }

  Widget _loginForm() {
    return Form(
      key: _formKey,
      child: Column(
        children: [
          JoinLogin_TFF(hint: "ID를", funcValidator: validateId(),controller: _id),
          JoinLogin_TFF(hint: "비밀번호를", funcValidator: validatePassword(),controller: _password,),
          ElevatedButton(
            onPressed: ()async {
              if(_formKey.currentState!.validate()) {
                print(_id.text.trim());
                int check = await u.login(_id.text.trim(), _password.text.trim());
                if(check==1) { // 서버에서 해당 user 정보를 가져와서 모바일 db 갱신
                  await loginUserDB().update(_id.text.trim());
                  await voca_db().init(_id.text.trim()); // 단어장 리스트 갱신
                  Get.to(MainPage());
                }else{
                 await ShowDialog();
                }

              }
            },
            child: Text("로그인하기"),
          ),
          TextButton(
            onPressed: () {
              Get.to(JoinPage());},
            child: Text("회원가입하기"),
          ),
        ],
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
                new Text("로그인 실패"),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("해당 Id나 password가 틀렸습니다."),
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
