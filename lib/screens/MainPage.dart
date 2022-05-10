import 'package:capstone_abeec/constants.dart';
import 'package:capstone_abeec/screens/MyVocaList.dart';
import 'package:capstone_abeec/screens/SearchVoca.dart';
import 'package:capstone_abeec/screens/unity.dart';
import 'package:flutter/cupertino.dart';
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
import 'MyPage.dart';

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
        backgroundColor: Color(0xffFFFFFF),
        body: SafeArea(
          child: Column(children: [

            // Align(alignment: Alignment.centerRight,
            //   child:Container(
            //     margin: EdgeInsets.all(10.0),
            //     decoration: BoxDecoration(
            //       color: Colors.white,
            //       borderRadius: BorderRadius.circular(50),
            //     ),
            //     child:IconButton(
            //       onPressed: (){Get.to(LoginPage());},
            //       icon: Icon(Icons.logout,size:25.0),
            //     )
            // ),),
            Stack(
                children: [
            Container(
              padding: EdgeInsets.only(top: 20,),
              alignment: Alignment.center,
              height: 180,
              child: Text("AbeeC", style: TextStyle(fontFamily: "Logo", fontSize: 80)),
              decoration: BoxDecoration(color: kPrimaryColor, borderRadius: BorderRadius.only(
                  bottomLeft: Radius.circular(150), bottomRight: Radius.circular(150),
              )),
            ),
              Center(
                  child :InkWell(
                  child:Container(
                width: 75,height: 75,margin: EdgeInsets.only(top:145),
                alignment: Alignment.center,
                    decoration: BoxDecoration(
                        color: Colors.white,
                        borderRadius: BorderRadius.circular(40),
                        // border:Border.all(color:Colors.yellow,width:5),
                        boxShadow: [
                          BoxShadow(color: Colors.grey, offset: Offset(
                              3.0, 3.0), blurRadius: 5.0,)
                        ]
                    ),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(40.0),
                  child: Image.asset("assets/resource/front_bee.png", fit: BoxFit.cover,),

                ),
              ),onTap: (){
                    Get.to(MyPage());
                  }
                  )
            ),]
            ),
            // 여기가 메인 아이콘들
            Container(
              decoration: BoxDecoration(
             //   color: Colors.white,
                // border:Border.all(color: Colors.red,width:2)
              ),
              padding: EdgeInsets.only(top:10, left: 10,right: 10),
              margin: EdgeInsets.only(top: 10,left: 10, right: 10),
              // margin: EdgeInsets.only(top:10,left: 10, right: 10),
              width: 450,
              height: 475,
              child:
              Stack(
                children: [
                  GridView.count(
                 // gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                  crossAxisCount: 2,
                  childAspectRatio: 4 / 5,
                  mainAxisSpacing: 20,
                  crossAxisSpacing: 10,
                children: [

                  InkWell(
                  child: Container(
                      padding: EdgeInsets.only(top:20),
                      decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(40),
                          // border:Border.all(color:Colors.yellow,width:5),
                          boxShadow: [
                            BoxShadow(color: Colors.grey, offset: Offset(
                                3.0, 3.0), blurRadius: 6.0,)
                          ]
                      ),
                      child: Column(
                        children: [
                          Image.asset("assets/resource/camera_yellow.png", height: 100, width: 100,),
                          Container(
                            padding: EdgeInsets.only(top: 10),
                              child: Column(
                              children:[
                              Text("단어찾기", style: TextStyle(fontSize: 25.0,fontFamily: "GmarketSans",fontWeight: FontWeight.bold),)
                              ,Text("사진을 찍고 어떤 단어인지 알아볼까요?",
                            style: TextStyle(fontSize: 10.0,color: kTextColor,fontFamily: "NotoSansKR", ),textAlign: TextAlign.center,)
                          ])
                          )

                        ],
                      ),
                    ),
                onTap: (){
                  Get.to(SearchVoca());
                },
                ),
                  InkWell(
                    child: Container(
                      padding: EdgeInsets.only(top:20),
                      decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(40),
                          // border:Border.all(color:Colors.yellow,width:5),
                          boxShadow: [
                            BoxShadow(color: Colors.grey, offset: Offset(
                                0.0, 1.0), blurRadius: 6.0,)
                          ]
                      ),
                      child: Column(
                        children: [
                          Image.asset("assets/resource/book_yellow.png", height: 100, width: 100,),
                          Container(
                              padding: EdgeInsets.only(top: 10),
                              child: Column(
                                  children:[
                                    Text("단어장", style: TextStyle(fontSize: 25.0,fontFamily: "GmarketSans",fontWeight: FontWeight.bold),)
                                    ,Text("지금까지 학습한 단어들이에요",
                                      style: TextStyle(fontSize: 10.0,color: kTextColor,fontFamily: "NotoSansKR", ),textAlign: TextAlign.center,)
                                  ])
                          )

                        ],
                      ),
                    ),
                    onTap: (){
                      Get.to(MyVocaList());
                    },
                  ),
                  InkWell(
                    child: Container(
                      padding: EdgeInsets.only(top:20),
                      decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(40),
                          // border:Border.all(color:Colors.yellow,width:5),
                          boxShadow: [
                            BoxShadow(color: Colors.grey, offset: Offset(
                                0.0, 1.0), blurRadius: 6.0,)
                          ]
                      ),
                      child: Column(
                        children: [
                          Image.asset("assets/resource/game_yellow.png", height: 100, width: 100,),
                          Container(
                              padding: EdgeInsets.only(top: 10),
                              child: Column(
                                  children:[
                                    Text("게임", style: TextStyle(fontSize: 25.0,fontFamily: "GmarketSans",fontWeight: FontWeight.bold),)
                                    ,Text("게임을 통해 단어를 외워봐요",
                                      style: TextStyle(fontSize: 10.0,color: kTextColor,fontFamily: "NotoSansKR", ),textAlign: TextAlign.center,)
                                  ])
                          )

                        ],
                      ),
                    ),
                    onTap: (){
                      Get.to(UnityDemoScreen());
                    },
                  ),
                  InkWell(
                    child: Container(
                      padding: EdgeInsets.only(top:20),
                      decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(40),
                          // border:Border.all(color:Colors.yellow,width:5),
                          boxShadow: [
                            BoxShadow(color: Colors.grey, offset: Offset(
                                0.0, 1.0), blurRadius: 6.0,)
                          ]
                      ),
                      child: Column(
                        children: [
                          Image.asset("assets/resource/mission_yellow.png", height: 100, width: 100,),
                          Container(
                              padding: EdgeInsets.only(top: 10),
                              child: Column(
                                  children:[
                                    Text("미션", style: TextStyle(fontSize: 25.0,fontFamily: "GmarketSans",fontWeight: FontWeight.bold),)
                                    ,Text("이번 주의 미션을 확인해 봐요",
                                      style: TextStyle(fontSize: 10.0,color: kTextColor,fontFamily: "NotoSansKR",),textAlign: TextAlign.center,)
                                  ])
                          )

                        ],
                      ),
                    ),
                    onTap: (){
                      Get.to(Mission());
                    },
                  ),
                ]
                ),
              ]
            ),
            ),
          ],
          ),
              // child: Stack(
              //   alignment: Alignment.topCenter,
              //   children: [
              //     Positioned(
              //       top: 18,
              //       child: IconButton(
              //         splashColor: Colors.orange,
              //           onPressed: () {
              //             Get.to(SearchVoca());
              //             setState(() {
              //               Image.asset('assets/resource/camera_white.png');
              //             });
              //           },
              //           iconSize: i_Size,
              //           icon: Image.asset('assets/resource/camera.png')),
              //     ),
              //     Positioned(
              //       top: 78,
              //       left: 205,
              //       child: RaisedButton(
              //           onPressed: () {
              //             // Get.to(MyVocaList());
              //             setState(() {
              //               click = !click;
              //             });
              //           },
              //          // iconSize: i_Size,
              //           child: Image.asset((click == true) ? yellowicon : whiteicon)
              //
              //
              //       ),
              //     ),
              //     Positioned(
              //       top: 78,
              //       right: 205,
              //       child: IconButton(
              //           onPressed: () {
              //             Get.to(Mission());
              //           },
              //           iconSize: i_Size,
              //           icon:
              //               Image.asset('assets/resource/user.png')),
              //     ),
              //     Positioned(
              //       child: IconButton(
              //             onPressed: () {
              //               Get.to(UnityDemoScreen());
              //             },
              //             iconSize: i_Size,
              //             icon: Image.asset('assets/resource/game.png')),
              //       top: 138,
              //     )
              //   ],
              // ),

        ),
    );

}
}