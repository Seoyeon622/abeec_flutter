/*
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class Mission extends StatefulWidget{
  @override
  _MissionState createState() => _MissionState();

}

class _MissionState extends State<Mission>{


  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        title: 'Flutter Layout demo',
        home: Scaffold(
            appBar: AppBar(
                title: Text('Flutter material layout demo')
            ),
            body: Center(
                child: Column(
                    children: <Widget>[
                      new Expanded(
                        child: GridView.count(crossAxisCount: 2,
                            children: List<Widget>.generate(2, (idx) {
                              return Container(
                                decoration: BoxDecoration(
                                    color: Colors.amberAccent,
                                    borderRadius: BorderRadius.circular(10)
                                ),
                                padding: const EdgeInsets.all(60),
                                margin: const EdgeInsets.all(10),
                                child: Text(
                                  "단어 $idx",
                                  style: TextStyle(fontSize: 20),
                                  textAlign: TextAlign.center,
                                ),
                              );

                            }).toList()),
                      ),
                      new Text("text")
                    ]
                ) // Hands on! 여기를 아래 코드로 대체하면 된다.
            )
        )
    );
  }






}*/
import 'dart:async';

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class Mission extends StatefulWidget{
  @override
  _MissionState createState() => _MissionState();

}

class _MissionState extends State<Mission>{


  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        title: 'Flutter Layout demo',
        home: Scaffold(
            //appBar: AppBar(
             //   title: const Text('mission page')
            //),
            body: Center(
                child:SafeArea(

                    child: Column(
                    children: <Widget>[
                      const SizedBox(height: 10),
                      const SizedBox(
                          height: 40,
                          child: Text(
                            "Weekly Mission",
                            style: TextStyle(fontSize: 30,fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          )),
                      const SizedBox(height: 10),
                      SizedBox(
                        height:270,
                        width :330,
                        child: Container(
                            decoration: BoxDecoration(
                                border: Border.all(
                                  width: 3,
                                  color: Colors.orange,
                                ),
                                //color: Colors.amberAccent,
                                borderRadius: BorderRadius.circular(10)    ),
                          child:GridView.builder(
                              padding: const EdgeInsets.all(10),
                              gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
                              maxCrossAxisExtent: 500,
                              mainAxisExtent: 60,
                                    ),
                                itemBuilder: (context, i) => Container(
                                            decoration: BoxDecoration(
                                              color: Colors.amberAccent,
                                              borderRadius: BorderRadius.circular(10)
                                          ),
                                          padding: const EdgeInsets.all(10),
                                          margin: const EdgeInsets.all(5),
                                            child: Text(
                                                    "단어 $i",
                                                      style: const TextStyle(fontSize: 20),
                                                    textAlign: TextAlign.center,
                                                    ),
                                                ),
                                          itemCount: 10,
                                          ),
                        ),
                      ),
                      const SizedBox(height: 20,),
                      Expanded(child: Container(
                        color: Colors.amberAccent,
                        child: Center( child: Column(
                          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                          children: [
                            //const SizedBox(height: 10,),
                            const Text("장유진",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold),
                                textAlign: TextAlign.center,), // 여기에 이름 넣어주기 ( ID )
                            //이미지 동그랗게 넣기 --> https://sothecode.tistory.com/47
                            const SizedBox(height: 120,child: Center(child:Text("이미지 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold)))),
                            Row(
                                mainAxisAlignment: MainAxisAlignment.spaceEvenly,

                              children: const [
                                Text("level 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold)),
                                Text("단어 수 넣을 곳",style: TextStyle(fontSize: 25,fontWeight: FontWeight.bold))
                              ],
                            ),
                          ],
                        ), ),
                      ) ),

                    ],
                  ) // Hands on! 여기를 아래 코드로 대체하면 된다.
                )
              )
        )
    );
  }






}
//child: GridView.builder(
//   padding: const EdgeInsets.all(10),
//   gridDelegate: const SliverGridDelegateWithMaxCrossAxisExtent(
//     maxCrossAxisExtent: 500,
//     mainAxisExtent: 60,
//   ),
//   // return a custom ItemCard
//   itemBuilder: (context, i) => Container(
//     decoration: BoxDecoration(
//         color: Colors.amberAccent,
//         borderRadius: BorderRadius.circular(10)
//     ),
//     padding: const EdgeInsets.all(10),
//     margin: const EdgeInsets.all(5),
//     child: Text(
//       "단어 $i",
//       style: const TextStyle(fontSize: 20),
//       textAlign: TextAlign.center,
//     ),
//   ),
//   itemCount: 10,
// ),