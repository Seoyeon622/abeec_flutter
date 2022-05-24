import 'dart:convert';
import 'dart:io';
import 'dart:math';
import 'dart:ui';

import 'package:capstone_abeec/models/my_voca_db.dart';
import 'package:capstone_abeec/screens/MyVocaDetail.dart';
import 'package:capstone_abeec/screens/TempVocaDetail.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:get/get.dart';
import 'package:image_picker/image_picker.dart';
import 'package:http/http.dart' as http;

import '../models/CameraMissionDB.dart';
import '../models/loginUser.dart';
import '../models/loginUserDB.dart';
import '../models/voca.dart';
import '../models/voca_db.dart';
import '../service/MyLevel.dart';
import '../constants.dart';
import 'Mission.dart';



class SearchVoca extends StatefulWidget {
  @override
  _SearchVocaState createState() => _SearchVocaState();
}

class _SearchVocaState extends State<SearchVoca> {
  final ImagePicker _picker = ImagePicker();
  File? image;
  String? userId = '';

  @override
  void initState() {
    Future.delayed(Duration.zero, () async {
      loginUser? user = await loginUserDB().user();
      userId = user?.user_id;
    });

    super.initState();
    pickImage();
  }

  final _model = VocaModel();

  Future pickImage() async {
    try {
      final XFile? image = await _picker.pickImage(source: ImageSource.camera);
      if (image == null) return;

      final imageTemporary = File(image.path);
      setState(() {
        this.image = imageTemporary;
      });
    } on PlatformException catch (e) {
      print("$e");
    }
  }

  uploadImage() async {
    File imageFile = File(image!.path);
    List<int> imageBytes = imageFile.readAsBytesSync();
    String base64Image = base64Encode(imageBytes);
    print("~~~~~~~~~~~~~~");
    print(base64Image);
    print("~~~~~~~~~~~~~~");
    Uri url = Uri.parse(
        'http://54.157.224.91:5000/duplication'); //https 쓰면 handshake exception 에러 발생
    http.Response response = await http.post(
      url,
      headers: <String, String>{
        'Content-Type': 'application/json; charset=UTF-8',
      },
      body: jsonEncode({
        'image': '$base64Image',
        'id': userId // 전역변수  id 넣어주기
      }),
    );
    var responseBody = utf8.decode(response.bodyBytes);
    print("===========");
    print(responseBody);
    print("===========");

    String ponse = responseBody.toString();
    res = jsonDecode(ponse);

    if (res['duplicate'] == "yes")
      return await ShowDialog();
    //return await ShowDialog(res['id'].toString(),base64Image);
    else {
      // duplicate 가 no 이면 해당 촬영한 단어가 촬영미션의 단어와 일치하는지 비교한 후 맞을 경우 camera_mission 테이블의 completed를 1로 설정하기
      print(res['percentage']);
      if(res['percentage'] <= 70){
        print('다시 촬영해주세요 다이어로그 띄우기');
        return await ShowNotCorret();
      }else{
        return await Get.to(() => TempVocaDetail(), arguments: res);
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    Size screenSize = MediaQuery.of(context).size;

    return Scaffold(
        backgroundColor: kPrimaryColor,
        appBar: AppBar(
          title: const Text(
            "Search Voca", style: TextStyle(color: Colors.white, fontSize: 25.0, fontFamily: 'GmarketSans', fontWeight: FontWeight.bold),
          ),
          leading: IconButton(
            icon: Icon(Icons.arrow_back, ),
            color: Colors.white,onPressed: (){
            Navigator.pop(context);
          },
          ),
          backgroundColor: kPrimaryColor, centerTitle: true, elevation: 0.0,

        ),
        body: SafeArea(
          child:
            Stack(
            children: [
              Container(
                padding: EdgeInsets.all(5),
                height: 750,
                width: 400,
                child: CustomPaint(
                  painter: BubblePainter(),
                ),
              ),
              // Center(
              //   child :
              Container(

                height: 600,
                padding: EdgeInsets.only(top:30),
                //color: Colors.white,
                child: Column(
                    children: [
                  image != null
                      ?
                  //Positioned(
                          // top: 20,
                          //child:
                Container(
                              width: 500,
                              height: 375,
                              decoration: BoxDecoration(
                                 //  color: Colors.pink,
                                  borderRadius: BorderRadius.circular(50),
                                  // border: Border.all(
                                  //     color: Colors.orangeAccent, width: 7)
                              ),
                              //padding: EdgeInsets.only(top: 100),
                              child: Image.file(
                                image!,
                                width: 300,
                                height: 300,
                                //fit: BoxFit.cover,
                              ))
                  //)
                      :
                 // Positioned(
                          // top: 150,
                       // child:
                  Center(
                          child: Container(
                              width: 330,
                              height: 330,
                              alignment: Alignment.center,
                              decoration: BoxDecoration(
                                  color: Colors.white,
                                  borderRadius: BorderRadius.circular(50),
                                  boxShadow: [
                                    BoxShadow(color: Colors.grey,
                                      spreadRadius: 2.0,
                                      offset: Offset(1.0, 2.0), blurRadius: 4.0,)
                                  ],
                                  // border: Border.all(
                                  //     color: Colors.black45, width: 5)
                              ),
                              child: const Icon(
                                Icons.photo_camera,
                                size: 200.0,
                                color: Colors.amberAccent,
                              )),
    )
                        //)
                ]),
              ),

             // ),
             Container(
               padding: EdgeInsets.only(top:430),
             child:
              Column(
                children: [
                  Row(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  crossAxisAlignment: CrossAxisAlignment.center,
                  children: [
                    OutlinedButton(
                      onPressed: () {
                        pickImage();
                      },
                      style: OutlinedButton.styleFrom(
                        primary: Colors.black,
                        backgroundColor: Colors.white,
                        textStyle: const TextStyle(fontSize: 20),
                        // side: BorderSide(width: 4, color: Colors.orangeAccent),
                     //   shadowColor: Colors.amber,
                        elevation: 5,
                        fixedSize: Size(160, 80),
                        shape: new RoundedRectangleBorder(
                          borderRadius: new BorderRadius.circular(40.0),
                        ),
                      ),
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Icon(Icons.arrow_back, size: 30,color: Colors.lightGreen,),
                          Text(
                            "다시 찍기",
                            style: TextStyle(
                                fontFamily: 'GmarketSans', fontSize: 22, fontWeight: FontWeight.bold
                                //backgroundColor: Color(0xFFe4cdee)
                            ),
                          )
                        ],
                      ),
                    ),
                    OutlinedButton(
                      onPressed: () {
                            () {
                          if (image != null) {
                            uploadImage();
                          }
                        }();
                      },
                      style: OutlinedButton.styleFrom(
                        backgroundColor: Colors.white,
                        primary: Colors.black,
                        textStyle: const TextStyle(fontSize: 25),
                        fixedSize: Size(160, 80),
                       // shadowColor: Colors.amber,
                        elevation: 5,
                        shape: new RoundedRectangleBorder(
                          borderRadius: new BorderRadius.circular(40.0),
                        ),
                      ),
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: const [
                         Icon(Icons.search, size: 30, color: Colors.lightGreen,),
                          Text(
                            "결과보기",
                            style: TextStyle(
                                fontFamily: 'GmarketSans', fontSize: 22, fontWeight: FontWeight.bold
                                //backgroundColor: Color(0xFFf8d2d2)
                            ),
                          )
                        ],
                      ),
                    ),
                  ],
                )
                // ButtonBar(
                //     alignment: MainAxisAlignment.center,
                //     children: [

                 // ])
             // )]),
              ]
              ),
             ),
              Center(
                child : Container(
                  padding: EdgeInsets.only(top: 560),
                  child: Image.asset("assets/resource/cute_bee.png", width: 100,height: 100,)
              ))
              ]
              ),
        )
          );
              /*child: Column(
                children: [
                  ElevatedButton(
                    onPressed: () {
                      pickImage();
                    },
                    child: const Text("사진 찍기"),
                    style: ElevatedButton.styleFrom(
                        primary: Colors.amber.shade300),
                  ),
                  ElevatedButton(
                    onPressed: () {
                      uploadImage();
                    },
                    child: const Text("단어 찾기"),
                    style: ElevatedButton.styleFrom(
                        primary: Colors.amber.shade300),
                  ),
//ElevatedButton(onPressed: () {ShowDialog();}, child: Text("체크체크")),
                  ElevatedButton(
                    onPressed: () {
                      Get.to(() => VocaDetail(), arguments: res);
                    },
                    child: Text("결과 보기"),
                  )
                ],
              )
              )*/

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
                new Text("중복 단어", style: TextStyle(fontFamily: "GmarketSans", fontSize: 25),),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: <Widget>[
                Text("저장된 단어입니다.", style: TextStyle(fontFamily: "GmarketSans",fontSize: 20)),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.to(() => VocaDetail(), arguments: res);
                  },
                  child: Text("확인", style: TextStyle(fontFamily: "GmarketSans", fontSize: 25, color: kPrimaryColor))),
            ],
          );
        });
  }
  ShowNotCorret() {
    showDialog(
        context: context,
        barrierDismissible: false,
        builder: (BuildContext context) {
          return AlertDialog(
            shape: RoundedRectangleBorder(
                borderRadius: BorderRadius.circular(20)),
            title: Column(
              children: <Widget>[
                new Text("불확실 단어", style: const TextStyle(fontFamily: "GmarketSans", fontSize: 25),),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: const <Widget>[
                Text("정확히 촬영해주세요.", style: TextStyle(fontFamily: "GmarketSans",fontSize: 20)),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.back();
                  },
                  child: Text("확인", style: const TextStyle(fontFamily: "GmarketSans", fontSize: 25, color: kPrimaryColor))),
            ],
          );
        });
  }

  ifDuplicate() async {
    Uri url = Uri.parse('http://54.157.224.91:5000/dbinsert');
    http.Response response = await http.post(
      url,
      headers: <String, String>{
        'Content-Type': 'application/json; charset=UTF-8',
      },
      body: jsonEncode({'response': 'yes'}),
    );
    print("------------");
    print(response.body);
    print("------------");
  }


}

class BubblePainter extends CustomPainter {
  @override
  void paint(Canvas canvas, Size size) {
    final bubbleSize = Size(size.width, size.height * 0.8);
    final tailSize = Size(size.width * 0.3, size.height - bubbleSize.height);
    final fillet = bubbleSize.width * 0.15; // 말풍선 얼마나 둥글게 할 지
    final tailStartPoint = Point(size.width * 0.5, bubbleSize.height*0.85); // 말풍선 위치 및 두께조절
    //bubble body
    final bubblePath = Path()
      ..moveTo(0, fillet)
    // 왼쪽 위에서 왼쪽 아래 라인
      ..lineTo(0, bubbleSize.height - fillet)
      ..quadraticBezierTo(0, bubbleSize.height, fillet, bubbleSize.height)
    // 왼쪽 아래에서 오른쪽 아래 라인
      ..lineTo(bubbleSize.width - fillet, bubbleSize.height)
      ..quadraticBezierTo(bubbleSize.width, bubbleSize.height, bubbleSize.width,
          bubbleSize.height - fillet)
    // 오른쪽 아래에서 오른쪽 위 라인
      ..lineTo(bubbleSize.width, fillet)
      ..quadraticBezierTo(bubbleSize.width, 0, bubbleSize.width - fillet, 0)
    // 오른쪽 위에서 왼쪽 아래 라인
      ..lineTo(fillet, 0)
      ..quadraticBezierTo(0, 0, 0, fillet);
    // bubble tail
    final tailPath = Path()
      ..moveTo(tailStartPoint.x, tailStartPoint.y)
      ..cubicTo(
        tailStartPoint.x + (tailSize.width * 0.2),
        tailStartPoint.y,
        tailStartPoint.x + (tailSize.width * 0.6),
        tailStartPoint.y + (tailSize.height * 0.2),
        tailStartPoint.x + tailSize.width / 2, // 목적지 x
        tailStartPoint.y + tailSize.height, // 목적지 y
      )
      ..cubicTo(
        (tailStartPoint.x + tailSize.width / 2) + (tailSize.width * 0.2),
        tailStartPoint.y + tailSize.height,
        tailStartPoint.x + tailSize.width,
        tailStartPoint.y + (tailSize.height * 0.3),
        tailStartPoint.x + tailSize.width, // 목적지 x
        tailStartPoint.y, // 목적지 y
      );
    // add tail to bubble body
    bubblePath.addPath(tailPath, Offset(0, 0));
    // paint setting
    final paint = Paint()
      ..color = Colors.white
      ..style = PaintingStyle.fill;
    // draw
    canvas.drawPath(bubblePath, paint);
  }
  @override
  bool shouldRepaint(CustomPainter oldDelegate) => false;
}