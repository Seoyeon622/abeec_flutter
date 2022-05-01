import 'package:flutter/cupertino.dart';
import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

import 'loginUser.dart';

class loginUserDB{
  var _fixed_loginUser_database;

  Future<Database> get fixed_loginUser_database async {
    if(_fixed_loginUser_database != null) return _fixed_loginUser_database;

    _fixed_loginUser_database = await openDatabase( // db 생성
      join(await getDatabasesPath(),'login_user.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE login_user(user_id TEXT,total_score INTEGER,score INTEGER,level INTEGER)",
        );
      },
      version:1,
    );
    return _fixed_loginUser_database;
  }



  Future<loginUser?> user() async{
    final Database db = await fixed_loginUser_database;
    final List<Map<String,dynamic>> u = await db.query('login_user');
    print("user:  " + u.toString());
    if(u.isEmpty){
      return null;
    }
    return loginUser(
      user_id: u[0]['user_id'],
      total_score: u[0]['total_score'],
      score: u[0]['score'],
      level: u[0]['level'],
    );
  }

  Future<int> insertloginUser(loginUser user) async{ // db 삽입
    final Database db = await fixed_loginUser_database;
    // 해당 user_id로 갱신
    int result = await db.update('login_user',
      user.toMap(),
    );
    //loginUser? u = await loginUserDB().user();
    //print(u.toString());

    return result;
  }

  Future<int> update(String id) async{
    final db = await fixed_loginUser_database;


    int result = await db.rawUpdate(
        'UPDATE login_user SET user_id = ? WHERE user_id = ?',
    [id,'']);

    return result;
  }

  deleteAllloginUser() async {
    final db = await fixed_loginUser_database;
    //print('delete');
    await db.rawDelete('DELETE FROM login_user');
  }

  init() async{
    final db = await fixed_loginUser_database;
    //초기화 시에 모든 필드 삭제후 빈 로그인유저로 갱신해주기

    await deleteAllloginUser();

    loginUser user = loginUser(
      user_id: '',
      total_score: 0,
      score: 0,
      level: 0
    );

    await loginUserDB().insert(user);

  }

  insert(loginUser user) async{
    final Database db = await fixed_loginUser_database;
    await db.insert('login_user',user.toMap(),
    conflictAlgorithm: ConflictAlgorithm.replace);

  }
}