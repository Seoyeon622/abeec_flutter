import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

class CameraMission{
  final String? english;
  final int? completed;

  CameraMission({
    this.english,
    this.completed,
  });

  // camera mission 을 map으로 변환, key는 데이터베이스 컬럼 명과 동일
  Map<String,dynamic> toMap(){
    return{
      'english':english,
      'completed':completed,
    };
  }

  @override
  String toString() {
    return 'CameraMission{english: $english, completed: $completed}';
  }




}


