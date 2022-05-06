import 'package:capstone_abeec/constants.dart';
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
            padding: EdgeInsets.only(top: 80),
            margin: EdgeInsets.only(bottom: 60),
            alignment: Alignment.center,
            height: 250,
            child: Text("ABeeC", style: TextStyle(fontFamily: "Logo", fontSize: 90)),
            decoration: BoxDecoration(color: kPrimaryColor, borderRadius: BorderRadius.only(
              bottomLeft: Radius.circular(150), bottomRight: Radius.circular(150)
            )),
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
        crossAxisAlignment: CrossAxisAlignment.center,
        children:
        [
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
            child: Text("로그인하기", style: TextStyle(fontFamily: "GmarketSans", fontSize: 20, fontWeight:FontWeight.bold),),
            style: ElevatedButton.styleFrom(
                primary: kPrimaryColor,shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(80)),minimumSize: Size(280, 60)
            ),
          ),
          TextButton(
            onPressed: () {
              Get.to(JoinPage());},
            child: Text("회원가입하기", style: TextStyle(fontFamily: "GmarketSans", fontSize: 20, fontWeight:FontWeight.bold),),
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
                new Text("로그인 실패",style: TextStyle(fontFamily: "GmarketSans", fontSize: 20)),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("해당 Id나 password가 틀렸습니다.", style: TextStyle(fontFamily: "GmarketSans")),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.back();
                  },
                  child: Text("확인", style: TextStyle(fontFamily: "GmarketSans", fontSize: 20, color: kPrimaryColor))),
            ],
          );
        });
  }
}