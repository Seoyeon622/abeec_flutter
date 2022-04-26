import 'dart:convert';
import 'dart:io';

import 'package:capstone_abeec/models/my_voca_db.dart';
import 'package:capstone_abeec/screens/MyVocaDetail.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:get/get.dart';
import 'package:image_picker/image_picker.dart';
import 'package:http/http.dart' as http;

class SearchVoca extends StatefulWidget {

  @override
  _SearchVocaState createState() => _SearchVocaState();
}


class _SearchVocaState extends State<SearchVoca> {

  final ImagePicker _picker = ImagePicker();
  File? image;

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
    Uri url = Uri.parse('http://54.157.224.91:5000/duplication'); //https 쓰면 handshake exception 에러 발생
    http.Response response = await http.post(
      url,
      headers: <String, String> {
        'Content-Type': 'application/json; charset=UTF-8',
      },
      body: jsonEncode({
        'image': '$base64Image',
        'id': 'abeec'
        }),
    );
    var responseBody = utf8.decode(response.bodyBytes);
    print("===========");
    print(responseBody);
    print("===========");

    String ponse = responseBody.toString();
    res = jsonDecode(ponse);

    if(res['duplicate'] == "yes")
      return await ShowDialog(res['id'].toString());
    //return await ShowDialog(res['id'].toString(),base64Image);
    else
      return await Get.to(() => VocaDetail(), arguments: res);
  }


  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("단어찾기 화면"),
      ),
      body: Container(
        padding: EdgeInsets.all(32),
        child: Column(
          children: [
            const SizedBox(height: 20,),
           Text("ABeeC", style: TextStyle(fontSize: 30, fontWeight: FontWeight.bold),),
            Spacer(),
            image != null ? Image.file(image!,
              width: 280, height: 280, fit: BoxFit.cover,) : FlutterLogo(size: 280),
            const SizedBox(height: 48,),
            ElevatedButton(
              onPressed: () {pickImage();},
              child: const Text("사진 찍기"),
              style: ElevatedButton.styleFrom(primary: Colors.amber.shade300),
            ),
            ElevatedButton(
              onPressed: () {uploadImage();},
              child: const Text("단어 찾기"),
              style: ElevatedButton.styleFrom(primary: Colors.amber.shade300),
            ),
            //ElevatedButton(onPressed: () {ShowDialog();}, child: Text("체크체크")),
            ElevatedButton(onPressed: () {Get.to(() => VocaDetail(), arguments: res);}, child: Text("결과 보기"),),
            Spacer(),
          ],
        ),
      ),
    );
  }
//ShowDialog(String id,String base64Image) {
  ShowDialog(String id) {
    showDialog(
        context: context,
        barrierDismissible: false,
        builder: (BuildContext context) {
          return AlertDialog(
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(20)),
            title: Column(
              children: <Widget>[
                new Text("중복 확인"),
              ],
            ),
            content: Column(
              mainAxisSize: MainAxisSize.min,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                Text("내 단어장에 이미 있는 단어입니다."),
                Text("사진을 변경하시겠습니까?"),
              ],
            ),
            actions: <Widget>[
              TextButton(onPressed: () {ifDuplicate();}, child: Text("YES")),
              //TextButton(onPressed:() {ifDuplicate(id,base64Image);},child:Text("YES")),
              TextButton(onPressed: () {Get.to(() => VocaDetail(), arguments: res);}, child: Text("NO")),
            ],
          );
        });
  }
//ifDuplicate(String id,String base64Image) async {
  ifDuplicate() async {
    Uri url = Uri.parse('http://54.157.224.91:5000/dbinsert');
    http.Response response = await http.post(
      url,
      headers: <String, String> {
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