import 'dart:io';

import 'package:capstone_abeec/models/voca.dart';
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';


void main() async {
  final database = openDatabase(
    join(await getDatabasesPath(), 'my_voca_database.db'),
    onCreate: (db, version) {
      return db.execute(
        "CREATE TABLE my_voca(id INTEGER PRIMARY KEY, english TEXT, korean TEXT)",
      );
    },
    version: 1,
  );

  Future <void> insertVoca(Voca voca) async {
    final Database db = await database;

    await db.insert(
        'my_voca',
        voca.toMap(),
        conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }

  Future<List<Voca>> my_voca() async {
    final Database db = await database;

    final List<Map<String, dynamic>> maps = await db.query('my_voca');

    return List.generate(maps.length, (i) {
      return Voca(
        id: maps[i]['id'],
        english: maps[i]['english'],
        korean: maps[i]['korean'],
      );
    });
  }

  Future<void> updateVoca(Voca voca) async {
    final db = await database;

    await db.update(
        'my_voca',
        voca.toMap(),
        where: "id = ?",
        whereArgs: [voca.id],
    );
  }

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


}

class Voca {
  final int? id;
  final String? english;
  final String? korean;

  Voca({
    this.id,
    this.english,
    this.korean,
  });

  Map<String, dynamic> toMap() {
    return {
      'id':id,
      'english':english,
      'korean':korean,
    };
  }

  @override
  String toString() {
    return 'Voca{id: $id, english: $english, korean:$korean}';
  }
}

