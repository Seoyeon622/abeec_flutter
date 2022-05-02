import 'dart:convert';
import 'dart:io';

import 'package:capstone_abeec/models/voca.dart';
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';
import 'package:http/http.dart' as http;

class voca_db {
  var _fixed_voca_database;

  Future<Database> get fixed_voca_database async {
    if(_fixed_voca_database != null) return _fixed_voca_database;

    _fixed_voca_database = await openDatabase( // db 생성
      join(await getDatabasesPath(),'my_voca_database.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE my_voca_database(english TEXT,korean TEXT)",
        );
      },
      version:1,
    );
    return _fixed_voca_database;
  }

  Future<List<Voca>> vocas() async {
    final db = await fixed_voca_database;

    final List<Map<String, dynamic>> maps = await db.query('my_voca_database');
    //print(maps.length);
    return List.generate(maps.length, (i) {
      return Voca(
        english: maps[i]['english'],
        korean: maps[i]['korean'],
      );
    });
  }

  Future<void> insertVoca(Voca voca) async{ // db 삽입
    final Database db = await fixed_voca_database;

    await db.insert(
      'my_voca_database',
      voca.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }
  deleteAllvoca() async{
    final db = await fixed_voca_database;

    await db.rawDelete('DELETE FROM my_voca_database');
  }
  init(String id) async{
    final db = await fixed_voca_database;

    await deleteAllvoca();

    String url = "http://54.157.224.91:8080/abeec/voca_list/"+id;
    Uri uri = Uri.parse(url);
    var response = await http.get(uri);
    var responseBody = utf8.decode(response.bodyBytes);
    String res = responseBody.toString();
    var responseJson = jsonDecode(res);

    //print("vocaList: " + responseJson.toString());
    for(var voca in responseJson){
      Voca inVoca = Voca(
        english: voca['english'],
        korean: voca['korean']
      );
      insertVoca(inVoca);
      print(inVoca.toString());
    }



  }




}



