//  import 'package:flutter/material.dart';
//
// import '../models/voca.dart';
// import '../models/voca_db.dart';
//
//
// class MyVocaList extends StatefulWidget {
//   //const VocaList({Key? key}) : super(key: key);
//
//   @override
//   _VocaListState createState() => _VocaListState();
// }
//
// class _VocaListState extends State<MyVocaList> {
//   List<Voca> vocaList = List.filled(0, Voca(english:'',korean:''));
//   @override
//   void initState() {
//
//
//     Future.delayed(Duration.zero,() async {
//       //your async 'await' codes goes here
//       List<Voca> vocaLists = await voca_db().vocas();
//       setState(() {
//         vocaList = vocaLists;
//         print(vocaList.toString());
//       });
//     });
//
//     super.initState();
//   }
//
//   @override
//   Widget build(BuildContext context) {
//
//     return Scaffold(
//       appBar: AppBar(
//         title: const Text(
//           "단어장",
//           style:  TextStyle(fontSize:25.0,fontFamily: 'DoHyeonRegular'),
//         ),
//       ),
//       backgroundColor: Color(0xffF8E77F),
//       body: GridView.builder(
//         itemCount: vocaList.length,
//         gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
//           crossAxisCount: 2,
//           childAspectRatio: 1 / 1,
//           mainAxisSpacing: 10,
//           crossAxisSpacing: 10,
//         ),
//         itemBuilder: (BuildContext context, int index) {
//           return Container(
//
//             decoration: BoxDecoration(
//                 color: Colors.white,
//                 borderRadius: BorderRadius.circular(15),
//                 border:Border.all(color:Colors.orangeAccent,width:5)
//             ),
//             width: 200.0,
//             height: 200.0,
//            // color: Colors.amberAccent,
//             padding: EdgeInsets.all(7.0),
//             margin: EdgeInsets.all(10.0),
//             child: Column(
//               mainAxisAlignment: MainAxisAlignment.spaceEvenly,
//               children: [
//
//                 ClipRRect(
//                   borderRadius: BorderRadius.circular(10.0),
//                   child: Image.asset(
//                     "assets/images/"+vocaList[index].english.toString()+".jpg",
//                     //width: 125.0,
//                   ),
//                 ),
//
//                 Container(
//                   height: 40,
//                   alignment: Alignment.center,
//                   //color: Colors.amber.shade300,
//                   child: Text(
//                     vocaList[index].english.toString(),
//                     style:  TextStyle(fontSize:25.0,fontFamily: 'DoHyeonRegular'),
//                   ),
//                 ),
//               ],
//             ),
//           );
//         },
//       ),
//     );
//   }
// }

import 'package:capstone_abeec/screens/MyVocaDetail.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';

import '../models/voca.dart';
import '../models/voca_db.dart';


class MyVocaList extends StatefulWidget {
  //const VocaList({Key? key}) : super(key: key);

  @override
  _VocaListState createState() => _VocaListState();
}

class _VocaListState extends State<MyVocaList> {
  List<Voca> vocaList = List.filled(0, Voca(english:'',korean:''));
  @override
  void initState() {


    Future.delayed(Duration.zero,() async {
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
          "단어장",
          style:  TextStyle(fontSize:25.0,fontFamily: 'DoHyeonRegular'),
        ),
      ),
      backgroundColor: Color(0xffF8E77F),
      body: GridView.builder(
        itemCount: vocaList.length,
        gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
          crossAxisCount: 2,
          childAspectRatio: 1 / 1,
          mainAxisSpacing: 10,
          crossAxisSpacing: 10,
        ),
        itemBuilder: (BuildContext context, int index) {
          return GestureDetector(
              onTap: (){Get.to(()=>VocaDetail(),arguments: vocaList[index]);},
              child:Container(

                decoration: BoxDecoration(
                    color: Colors.white,
                    borderRadius: BorderRadius.circular(15),
                    border:Border.all(color:Colors.orangeAccent,width:5)
                ),
                width: 200.0,
                height: 200.0,
                // color: Colors.amberAccent,
                padding: EdgeInsets.all(7.0),
                margin: EdgeInsets.all(10.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: [
                    /*InkWell(
                  onTap: (){Get.to(()=>VocaDetail(), arguments:vocaList[index]);},
                  child: const Icon(
                    size : 100
                  ),
                ),*/
                    ClipRRect(
                      borderRadius: BorderRadius.circular(10.0),
                      child: Image.asset(
                        "assets/images/"+vocaList[index].english.toString()+".jpg",
                        //width: 125.0,
                      ),
                    ),

                    Container(
                      height: 40,
                      alignment: Alignment.center,
                      //color: Colors.amber.shade300,
                      child: Text(
                        vocaList[index].english.toString(),
                        style:  TextStyle(fontSize:25.0,fontFamily: 'DoHyeonRegular'),
                      ),
                    ),
                  ],
                ),
              )
          );},
      ),
    );
  }
}