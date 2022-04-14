import 'dart:async';

import 'package:flutter/cupertino.dart';
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';

class VocaModel {
  Database? _database;

  Future<Database> get database async {
    if (_database != null) return _database!;

    return await initDB();
  }

  initDB() async {
    String path = join(await getDatabasesPath(), 'my_voca_database.db');

    return await openDatabase(
      path,
      version: 1,
      onCreate: _onCreate,
      onUpgrade: _onUpgrade,
    );
  }
}

FutureOr<void> _onCreate(Database db, int version) {
  String sql = '''
  CREATE TABLE my_voca(
  id INTEGER PRIMARY KEY,
  english TEXT,
  korean TEXT)
  ''';

  db.execute(sql);
}

FutureOr<void> _onUpgrade(Database db, int oldVersion, int newVersion) {}