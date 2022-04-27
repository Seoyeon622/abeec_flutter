import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

import 'CameraMission.dart';

class CameraMissionDB{
  var _fixed_camera_database;

  Future<Database> get fixed_camera_database async {
    if(_fixed_camera_database != null) return _fixed_camera_database;

    _fixed_camera_database = await openDatabase( // db 생성
      join(await getDatabasesPath(),'camera_mission.db'),
      onCreate: (db,version){
        return db.execute(
          "CREATE TABLE camera_mission(english TEXT,completed INTEGER)",
        );
      },
      version:1,
    );
    return _fixed_camera_database;
  }


  Future<void> insertCameraMission(CameraMission camera) async{ // db 삽입
    final Database db = await fixed_camera_database;

    await db.insert(
      'camera_mission',
      camera.toMap(),
      conflictAlgorithm: ConflictAlgorithm.replace,
    );
  }

  Future<List<CameraMission>> cameras() async {     // db 출력
    final Database db = await fixed_camera_database;

    final List<Map<String, dynamic>> maps = await db.query('camera_mission');
    //print(maps.length);
    return List.generate(maps.length, (i) {
      return CameraMission(
        english: maps[i]['english'],
        completed: maps[i]['completed'],
      );
    });
  }

  cameraUpdate(String english) async{
    final db = await fixed_camera_database;
    var camera = CameraMission(
      english: english,
      completed: 1,
    );
    await db.update('camera_mission',camera.toMap(),where:'english=?',whereArgs:[camera.english]);
  }

  deleteAllCameras() async {  // db 삭제
    final db = await fixed_camera_database;
    db.rawDelete('DELETE FROM camera_mission');
  }

}