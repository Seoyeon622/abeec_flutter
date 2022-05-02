import 'package:capstone_abeec/models/loginUser.dart';
import 'package:capstone_abeec/screens/LoginPage.dart';
import 'package:capstone_abeec/service/user_controller.dart';
import 'package:capstone_abeec/utils/validator.dart';
import 'package:capstone_abeec/widgets/joinlogin_tff.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';

import '../models/loginUserDB.dart';

class JoinPage extends StatefulWidget {

  @override
  State<JoinPage> createState() => _JoinPageState();
}

class _JoinPageState extends State<JoinPage> {

  @override
  void initState() {
    // login_user 테이블 초기화 ( 삭제하고 빈 user 넣기 )
   // loginUserDB().fixed_loginUser_database;
    super.initState();
  }
  final _formKey = GlobalKey<FormState>();

  final UserController u = Get.put(UserController());

  final _id = TextEditingController();

  final _name = TextEditingController();

  final _password = TextEditingController();

  final _age = TextEditingController();

  final _phone = TextEditingController();

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
          _joinForm(),
        ],
      ),
    );
  }

  Widget _joinForm() {
    return Form(

      key: _formKey,
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [

          JoinLogin_TFF(controller: _id, hint: "아이디를", funcValidator: validateId()),
          JoinLogin_TFF(controller: _name, hint: "이름을", funcValidator: validateName(),),
          JoinLogin_TFF(controller: _password, hint: "비밀번호를", funcValidator: validatePassword(),),
          JoinLogin_TFF(controller: _age, hint: "나이를", funcValidator: validateAge(),),
          JoinLogin_TFF(controller: _phone, hint: "휴대폰번호를", funcValidator: validatePhone(),),
          ElevatedButton(
            onPressed: () async {
              if(_formKey.currentState!.validate()) {

                String u_id = await u.join(_id.text.trim(), _name.text.trim(), _password.text.trim(),
                    int.parse(_age.text.trim()), _phone.text.trim());
                  Get.to(LoginPage());

              }
            },
            child: const Text("가입하기"),
          ),
          TextButton(
            onPressed: () {
              Get.to(LoginPage());},
            child: const Text("로그인하기"),
          ),
        ],
      ),
    );
  }
}