import 'package:capstone_abeec/screens/MyVocaList.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:capstone_abeec/screens/unity.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:get/get.dart';

import 'package:clickable_list_wheel_view/clickable_list_wheel_widget.dart';
import 'package:clickable_list_wheel_view/measure_size.dart';

import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import 'JoinPage.dart';
import 'LoginPage.dart';
import 'Mission.dart';

class MainPage extends StatefulWidget {
  @override
  State<MainPage> createState() => _MainPageState();
}

class _MainPageState extends State<MainPage> {
  final _scrollController = FixedExtentScrollController();

  double i_Size = 120;


  @override
  void initState() {
    // TODO: implement initState
    // user 데이터베이스 id가 존재하는지 확인하기 없으면 --> login 화면 있으면 main화면
    Future.delayed(Duration.zero,() async{
      loginUser? user = await loginUserDB().user();
      print("hey " + user.toString());
      if(user == null || user.user_id==''){
        // user_id가 빈것이면 아직 로그인이 안된 것
        Get.to(LoginPage());
      }
      await Mission().getMissions();
    });
    super.initState();
  }
  @override
  Widget build(BuildContext context) {
    SystemChrome.setPreferredOrientations([DeviceOrientation.portraitUp]);
    return Scaffold(
        backgroundColor: Color(0xffF8E77F),
        body: SafeArea(
          child: Column(children: [
            Align(alignment: Alignment.centerRight,
              child:Container(
                margin: EdgeInsets.all(10.0),
                decoration: BoxDecoration(
                  color: Colors.white,
                  borderRadius: BorderRadius.circular(50),
                ),
                child:IconButton(
                  onPressed: (){Get.to(LoginPage());},
                  icon: Icon(Icons.logout,size:25.0),
                )
            ),),

            Container(
              margin: EdgeInsets.fromLTRB(0,0, 0, 0),

              width: 400,
              height: 200,
              child: Center(
                  child: Image.asset('assets/resource/bee.png',
                      )),
            ),
            Container(
              margin: EdgeInsets.fromLTRB(0,0, 0, 0),
              //color: Colors.orange,
              width: 300,
              height: 100,
              child: Center(
                  child: Image.asset('assets/resource/logo.png',
                      width: 400, height: 400)),
              /*padding : EdgeInsets.all(20),
          child:Image.asset('assets/resource/logo.png')*/
            ),
            Container(
              decoration: BoxDecoration(
                color: Colors.white,
                borderRadius: BorderRadius.circular(50),
                border:Border.all(color:Colors.orangeAccent,width:7)
              ),
              margin: EdgeInsets.fromLTRB(20, 30, 20, 0),

              width: 400,
              height: 300,
              child: Stack(
                alignment: Alignment.topCenter,
                children: [
                  Positioned(
                    top: 18,
                    child: IconButton(
                      splashColor: Colors.orange,
                        onPressed: () {
                          Get.to(SearchVoca());
                        },
                        iconSize: i_Size,
                        icon: Image.asset('assets/resource/camera.png')),
                  ),
                  Positioned(
                    top: 78,
                    left: 205,
                    child: IconButton(
                        onPressed: () {
                          Get.to(MyVocaList());
                        },
                        iconSize: i_Size,
                        icon: Image.asset('assets/resource/voca.png')),
                  ),
                  Positioned(
                    top: 78,
                    right: 205,
                    child: IconButton(
                        onPressed: () {
                          Get.to(Mission());
                        },
                        iconSize: i_Size,
                        icon:
                            Image.asset('assets/resource/user.png')),
                  ),
                  Positioned(
                    /*child: InkWell(
                      child: Image.asset(('assets/resource/game.png'),width: 130,height: 130),
                      onTap: (){},
                      splashColor: Colors.black,
                    ),
                      top: 210*/


                    child: IconButton(
                          onPressed: () {
                            Get.to(UnityDemoScreen());
                          },
                          iconSize: i_Size,
                          icon: Image.asset('assets/resource/game.png')),
                    top: 138,
                  )
                ],
              ),
            )
          ]),
        ));
  }
}
