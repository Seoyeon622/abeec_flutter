import 'dart:convert';
import 'dart:math';

import 'package:flutter/cupertino.dart';
import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';
import 'package:http/http.dart' as http;
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

  Future<int> update(String id) async{    // 해당 데이터베이스 서버 접속해서 user 정보가져온뒤 갱신해주기
    final db = await fixed_loginUser_database;


    String url = "http://54.157.224.91:8080/abeec/user/" + id;
    Uri uri = Uri.parse(url);
    var response = await http.get(uri);
    var responseBody = utf8.decode(response.bodyBytes);
    String res = responseBody.toString();
    var responseJson = jsonDecode(res);

    //total_score 통해서 exp 와 level 구하는 부분 구현
    int total_score = responseJson['totalScore'];;
    //print(total_score.runtimeType);
    int level_2 = (1+((-2+sqrt(4+2*total_score))/2)).toInt();
    int score_2 = total_score - (level_2-1)*(4+2*(level_2-1));


    loginUser user = loginUser(
      user_id: responseJson['id'],
      total_score: responseJson['totalScore'],
      score:score_2,
      level:level_2
    );
    int result = await db.update('login_user', user.toMap());

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
      level: 1
    );

    await loginUserDB().insert(user);

  }

  insert(loginUser user) async{
    final Database db = await fixed_loginUser_database;
    await db.insert('login_user',user.toMap(),
    conflictAlgorithm: ConflictAlgorithm.replace);

  }
}