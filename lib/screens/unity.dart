import 'dart:convert';

import 'package:capstone_abeec/models/voca.dart';
import 'package:capstone_abeec/models/voca_db.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:get/get.dart';
import 'package:get/get_core/src/get_main.dart';

import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import 'MainPage.dart';
import '../constants.dart';


void main() {

  runApp(MaterialApp(
      home: UnityDemoScreen()
  ));

}

class UnityDemoScreen extends StatefulWidget {

  UnityDemoScreen({Key? key}) : super(key: key);

  @override
  _UnityDemoScreenState createState() => _UnityDemoScreenState();




}

class _UnityDemoScreenState extends State<UnityDemoScreen>{
  static final GlobalKey<ScaffoldState> _scaffoldKey =
  GlobalKey<ScaffoldState>();
  late UnityWidgetController _unityWidgetController;
  loginUser? user = loginUser();

  List<Voca>? vocaList = List.filled(0, Voca(english:'',korean:''));
  int? vocaLength;
  String? user_id;

  @override
  void initState() {
    Future.delayed(Duration.zero,() async{


      print("______");
      print(user?.user_id);
      print(vocaList?.length);
      print('$user_id,$vocaLength');
      print("______");


    });
    super.initState();
  }

  Widget build(BuildContext context) {

    return Scaffold(
      key: _scaffoldKey,
      body: SafeArea(
        bottom: false,
        child: WillPopScope(
          onWillPop: () async {
            showDialog(
                context: context,
                builder: (context) => AlertDialog(
                  title: Text("게임을 끝낼까요?", style: TextStyle(fontSize: 20.0,
                      fontFamily: 'GmarketSans',),textAlign: TextAlign.center,),
                  actions: <Widget>[

                    Row(
                        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                        crossAxisAlignment: CrossAxisAlignment.center,
                children :[
                    ElevatedButton(
                      style: ElevatedButton.styleFrom( primary: kPrimaryColor),
                        child: Text("네", style: TextStyle(fontSize: 10.0,
                            fontFamily: 'GmarketSans'),),
                        onPressed: ()=>   {
                          Navigator.pushAndRemoveUntil(context, MaterialPageRoute(
                              builder: (BuildContext context) =>
                                  MainPage()), (route) => false),
                          _unityWidgetController.unload(),
                        }
                        ,
                    ), ElevatedButton(
                    style: ElevatedButton.styleFrom( primary: kPrimaryColor),
                    child: Text("아니요", style: TextStyle(fontSize: 10.0,
            fontFamily: 'GmarketSans'),),
                      onPressed: ()=>Navigator.pop(context, true),
                    )
                     ])
                     ]
                )
            );
            return await Future.value(true);
          },
          child: Container(
            child: UnityWidget(
              onUnityCreated: onUnityCreated,
            ),
          ),
        ),
      ),
    );
  }

/*
Future<void> setInfo() async{
    final
}
*/



  // Callback that connects the created controller to the unity controller
  Future<void> onUnityCreated(controller) async{

    user = await loginUserDB().user();
    List<Voca> vocaLists = await voca_db().vocas();
    vocaList = vocaLists;
    vocaLength = vocaList!.length;
    user_id = user!.user_id;
    //user_id = 'yoojinjangjang';
    //vocaLength = 10;


    _unityWidgetController = controller;
    _unityWidgetController.postMessage('Game', 'setId',
        '$user_id,$vocaLength');


  }




}


