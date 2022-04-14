import 'package:flutter/material.dart';

class MyVoca extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("단어장 화면"),
      ),
      body: GridView.count(crossAxisCount: 2,
          children: List<Widget>.generate(20, (idx) {
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
    );
  }
}
