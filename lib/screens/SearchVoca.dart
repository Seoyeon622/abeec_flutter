import 'dart:convert';
import 'dart:io';

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
    Future.delayed(Duration.zero,() async {
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
        'id': userId   // 전역변수  id 넣어주기
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
      return await Get.to(()=>TempVocaDetail(),arguments: res);
      // Voca voca = Voca(english:res['english'].toString(),korean: res['korean'].toString());
      // voca_db().insertVoca(voca);
      // CameraMissionDB().cameraUpdate(res['english']);
      // MyLevel().getScore(2);
      // return await Get.to(() => VocaDetail(), arguments: res);
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Color(0xffF8E77F),
        body: SafeArea(
          child: Column(
            children: [

              Container(
                height: 500,
                //color: Colors.white,
                child: Stack(alignment: Alignment.topCenter, children: [
                  Positioned(
                      child: Image.asset(
                    'assets/resource/liquid_honey.png',
                    fit: BoxFit.fitWidth,
                  )),
                  image != null
                      ? Positioned(
                          top: 150,
                          child: Container(
                              width: 330,
                              height: 330,
                              decoration: BoxDecoration(
                                  color: Colors.white,
                                  borderRadius: BorderRadius.circular(50),
                                  border: Border.all(
                                      color: Colors.orangeAccent, width: 7)),
                              //padding: EdgeInsets.only(top: 100),
                              child: Image.file(
                                image!,
                                width: 300,
                                height: 300,
                                //fit: BoxFit.cover,
                              )))
                      : Positioned(
                          top: 150,
                          child: Container(
                              width: 330,
                              height: 330,
                              decoration: BoxDecoration(
                                  color: Colors.white,
                                  borderRadius: BorderRadius.circular(50),
                                  border: Border.all(
                                      color: Colors.orangeAccent, width: 7)),
                              child: const Icon(
                                Icons.photo_camera,
                                size: 200.0,
                                color: Colors.amberAccent,
                              )),
                        )
                ]),
              ),
              Container(
                margin: EdgeInsets.only(top: 20),
                //color: Colors.white,
                height: 150,
                child:
                    ButtonBar(alignment: MainAxisAlignment.center, children: [
                  ElevatedButton(
                    onPressed: () {
                      pickImage();
                    },
                    style: ElevatedButton.styleFrom(
                      primary: Color(0xffFEE134),
                      onPrimary: Colors.black,
                      textStyle: const TextStyle(fontSize: 25),
                      side: BorderSide(width: 4, color: Colors.orangeAccent),
                      elevation: 10,
                      fixedSize: Size(120, 120),
                      shape: new RoundedRectangleBorder(
                        borderRadius: new BorderRadius.circular(20.0),
                      ),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Icon(Icons.arrow_back,size: 50,),
                        Text(
                          "다시 찍기",
                          style: TextStyle(fontFamily: 'DoHyeonRegular'),
                        )
                      ],
                    ),
                  ),
                  ElevatedButton(
                    onPressed: () {
                      (){if(image!=null){
                      uploadImage();
                      }}();

                    },
                    style: ElevatedButton.styleFrom(
                      primary: Color(0xffFEE134),
                      onPrimary: Colors.black,
                      textStyle: const TextStyle(fontSize: 25),
                      fixedSize: Size(120, 120),
                      elevation: 10,
                      shape: new RoundedRectangleBorder(
                        borderRadius: new BorderRadius.circular(20.0),
                      ),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: const [
                        Icon(Icons.search,size: 50),
                        Text(
                          "뭘까용?",
                          style: TextStyle(fontFamily: 'DoHyeonRegular'),
                        )
                      ],
                    ),
                  ),
                  ElevatedButton(
                    onPressed: () {
                      (){if(res!=null && image!=null){
                        Get.to(() => VocaDetail(), arguments: res);
                      }}();
                    },
                    style: ElevatedButton.styleFrom(
                      primary: const Color(0xffFEE134),
                      onPrimary: Colors.black,
                      textStyle: const TextStyle(fontSize: 25),
                      fixedSize: const Size(120, 120),
                      elevation: 10,
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(20.0),
                      ),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: const [
                        Icon(Icons.search,size: 50),
                        Text(
                          "결과",
                          style: TextStyle(fontFamily: 'DoHyeonRegular'),
                        )
                      ],
                    ),
                  ),
                ]),
              )
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
            ],
          ),
        ));
  }

//ShowDialog(String id,String base64Image) {
  ShowDialog() {
    showDialog(
        context: context,
        barrierDismissible: false,
        builder: (BuildContext context) {
          return AlertDialog(
            shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20)),
            title: Column(
              children: <Widget>[
                new Text("중복 단어"),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("저장된 단어입니다."),
              ],
            ),
            actions: <Widget>[
              TextButton(
                  onPressed: () {
                    Get.to(() => VocaDetail(), arguments: res);
                  },
                  child: Text("확인")),
            ],
          );
        });
  }

//ifDuplicate(String id,String base64Image) async {
  ifDuplicate() async {
    Uri url = Uri.parse('http://54.157.224.91:5000/dbinsert');
    http.Response response = await http.post(
      url,
      headers: <String, String>{
        'Content-Type': 'application/json; charset=UTF-8',
      },
      body: jsonEncode({'response': 'yes'}),
      //body: jsonEncode({'image':'$base64Image','id':'$id'}),
    );
    print("------------");
    print(response.body);
    print("------------");
  }
}

// 서버에서 해당 my_voca table id 값으로 image 부분 갱신 & 해당 image 서버에 저장

/*
Container(
child: Column(
children: [
ElevatedButton(
onPressed: () {
pickImage();
},
child: const Text("사진 찍기"),
style:
ElevatedButton.styleFrom(primary: Colors.amber.shade300),
),
ElevatedButton(
onPressed: () {
uploadImage();
},
child: const Text("단어 찾기"),
style:
ElevatedButton.styleFrom(primary: Colors.amber.shade300),
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
