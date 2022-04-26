import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';

class ListeningMission{
  final String? english;
  final int? count; //들은 횟수

  ListeningMission({
    this.english,
    this.count,
  });

  // camera mission 을 map으로 변환, key는 데이터베이스 컬럼 명과 동일
  Map<String,dynamic> toMap(){
    return{
      'english':english,
      'count':count,
    };
  }

  @override
  String toString() {
    return 'ListeningMission{english: $english, count: $count}';
  }
}


