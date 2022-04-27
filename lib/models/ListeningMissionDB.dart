import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

import 'ListeningMission.dart';

class ListeningMissionDB{
  var _fixed_listening_database;

  Future<Database> get fixed_listening_database async {
    if(_fixed_listening_database != null) return _fixed_listening_database;

    _fixed_listening_database = openDatabase( // db 생성
      join(await getDatabasesPath(),'listening_mission.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE listening_mission(english TEXT,count INTEGER)",
        );
      },
      version:1,
    );
    return _fixed_listening_database;
  }

  Future<void> insertListeningMission(ListeningMission listeningMission) async{ // db 삽입
    final Database db = await fixed_listening_database;

    await db.insert(
      'listening_mission',
      listeningMission.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }

  Future<List<ListeningMission>> listenings() async {     // db 출력
    final Database db = await fixed_listening_database;

    final List<Map<String, dynamic>> maps = await db.query('listening_mission');
    //print(maps.length);
    return List.generate(maps.length, (i) {
      return ListeningMission(
        english: maps[i]['english'],
        count: maps[i]['count'],
      );
    });
  }


  listeningUpdate(String english) async{
    // count 갱신하는 부분 작성 필요
    final db = await fixed_listening_database;
    var listening = ListeningMission(
      english: english,
      count : 1,
    );
    await db.update('listening_mission', listening.toMap(),where:'english=?',whereArgs: [listening.english]);
  }

  deleteAllListening() async {  // db 삭제
    final db = await fixed_listening_database;
    db.rawDelete('DELETE FROM listening_mission');
  }
}