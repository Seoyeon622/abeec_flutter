import 'dart:io';

import 'package:capstone_abeec/models/voca.dart';
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';
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

  Future<void> insertListeningMission(Voca voca) async{ // db 삽입
    final Database db = await fixed_voca_database;

    await db.insert(
      'my_voca_database',
      voca.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }

}

// void main() async {
//   final database = openDatabase(
//     join(await getDatabasesPath(), 'my_voca_database.db'),
//     onCreate: (db, version) {
//       return db.execute(
//         "CREATE TABLE my_voca(english TEXT, korean TEXT)",
//       );
//     },
//     version: 1,
//   );
//
//   Future <void> insertVoca(Voca voca) async {
//     final Database db = await database;
//
//     await db.insert(
//       'my_voca',
//       voca.toMap(),
//       conflictAlgorithm: ConflictAlgorithm.replace,
//     );
//   }
//
//   Future<List<Voca>> my_voca() async {
//     final Database db = await database;
//
//     final List<Map<String, dynamic>> maps = await db.query('my_voca');
//
//     return List.generate(maps.length, (i) {
//       return Voca(
//         id: maps[i]['id'],
//         english: maps[i]['english'],
//         korean: maps[i]['korean'],
//       );
//     });
//   }
//
//   Future<void> updateVoca(Voca voca) async {
//     final db = await database;
//
//     await db.update(
//       'my_voca',
//       voca.toMap(),
//       where: "id = ?",
//       whereArgs: [voca.id],
//     );
//   }
// }
  /*
  Future<Voca> getId(String english, String korean) async {
    final Database db = await database;

    List<Map<String, dynamic>> result = await db.query(
      'my_voca',
      where: "english = ? AND korean = ?",
      whereArgs: [english, korean],
    );
  }
   */




