
import 'package:capstone_abeec/constants.dart';
import 'package:capstone_abeec/screens/MyVocaDetail.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';

import '../models/voca.dart';
import '../models/voca_db.dart';
import '../constants.dart';


class MyVocaList extends StatefulWidget {

  @override
  _VocaListState createState() => _VocaListState();
}

class _VocaListState extends State<MyVocaList> {
  List<Voca> vocaList = List.filled(0, Voca(english: '', korean: ''));

  @override
  void initState() {
    Future.delayed(Duration.zero, () async {
      //your async 'await' codes goes here
      List<Voca> vocaLists = await voca_db().vocas();
      setState(() {
        vocaList = vocaLists;
        print(vocaList.toString());
      });
    });

    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Text(
            "Voca List", style: TextStyle(fontSize: 28.0, color: Colors.white,fontFamily: 'GmarketSans', fontWeight: FontWeight.bold, ),
          ),
          leading: IconButton(
            icon: Icon(Icons.arrow_back),
            color: Colors.white,onPressed: (){
            Navigator.pop(context);
          },
          ),
          backgroundColor: kPrimaryColor, centerTitle: true, elevation: 0.0,
        ),
        backgroundColor: Color(0xFFFDFDFD),
        body: SafeArea(
          child: ListView(children: [
            Container(
              alignment: Alignment.centerLeft,
              height: 100,
              margin: EdgeInsets.only(top:10,bottom: 5, right: 20, left: 20),
              child : Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Column(
                crossAxisAlignment: CrossAxisAlignment.start, mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("지금까지 학습한", style: TextStyle(backgroundColor: Color(0xFFc7e6f9),fontFamily: "GmarketSans",fontSize: 30, fontWeight:FontWeight.bold)),
                  Text("단어들이에요", style: TextStyle(backgroundColor: Color(0xFFc7e6f9),fontFamily: "GmarketSans",fontSize: 30, fontWeight:FontWeight.bold)),],
              ),
                  Image.asset("assets/resource/cute_bee.png", width: 90,height: 90,),
              ],
              ),
            ),
            GridView.builder(
              itemCount: vocaList.length,
              shrinkWrap: true,
              gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                crossAxisCount: 2,
                childAspectRatio: 3 / 4,
                mainAxisSpacing: 10,
                crossAxisSpacing: 5,
              ),
              itemBuilder: (BuildContext context, int index) {
                return GestureDetector(
                    onTap: () {
                      Get.to(() => VocaDetail(), arguments: vocaList[index]);
                    },

                    child: Container(
                      decoration: BoxDecoration(
                          color: Colors.white,
                          borderRadius: BorderRadius.circular(40),
                          // border:Border.all(color:Colors.yellow,width:5),
                          boxShadow: [
                            BoxShadow(color: Colors.grey, offset: Offset(
                                0.0, 1.0), blurRadius: 6.0,)
                          ]
                      ),
                      width: 800.0,
                      height: 200.0,
                      // color: Colors.amberAccent,
                      padding: EdgeInsets.all(2.0),
                      margin: EdgeInsets.all(3.0),
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.center,
                        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                        children: [
                          ClipRRect(
                            borderRadius: BorderRadius.circular(10.0),
                            child: Image.asset(
                              "assets/images/" +
                                  vocaList[index].english.toString() + ".jpg",
                              width: 500.0,
                            ),
                          ),

                          Container(
                            height: 80,
                            alignment: Alignment.center,
                            //color: Colors.amber.shade300,
                            child: Text(
                              vocaList[index].english.toString(),
                              style: TextStyle(fontSize: 30.0,
                                  fontFamily: 'NotoSansKR',
                                  fontWeight: FontWeight.bold),textAlign: TextAlign.center,
                            ),
                          ),
                        ],
                      ),
                    )
                );
              },
            ),
          ],),
        )
    );
  }
}