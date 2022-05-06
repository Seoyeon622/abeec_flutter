import 'package:capstone_abeec/service/MyLevel.dart';
import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

import 'ListeningMission.dart';

class ListeningMissionDB{
  var _fixed_listening_database;

  Future<Database> get fixed_listening_database async {
    if(_fixed_listening_database != null) return _fixed_listening_database;

    _fixed_listening_database = await openDatabase( // db 생성
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
    // var listening = ListeningMission(
    //   english: english.trim(),
    //   count : 1,
    // );
    print(english);
    int result = await db.rawUpdate(
        'UPDATE listening_mission SET count = count + 1 WHERE english = ?',
        [english.trim()]);
    List<Map<String,dynamic>>  mission =
      await db.rawQuery('SELECT * FROM listening_mission WHERE english = ?',[english.trim()]);

    if(result != 0 && mission[0]['count']==3){
    // 점수를 올릴 함수
      MyLevel().getScore(3);
    }

  }

  deleteAllListening() async {  // db 삭제
    final db = await fixed_listening_database;
    db.rawDelete('DELETE FROM listening_mission');
  }
}