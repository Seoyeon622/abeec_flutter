import 'package:flutter/physics.dart';

class loginUser{
 final String? user_id;
 final int? total_score;
 final int? score;
 final int? level;

 loginUser({
   this.user_id,
   this.total_score,
   this.score,
   this.level
});

 Map<String,dynamic> toMap(){
   return{
     'user_id':user_id,
     'total_score':total_score,
     'score':score,
     'level':level
   };
 }

 @override
  String toString() {
    // TODO: implement toString
    return 'loginUser{userId: $user_id, totalScore: $total_score, score: $score, level: $level';
  }
}