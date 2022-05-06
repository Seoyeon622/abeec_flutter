import 'dart:convert';

import 'package:capstone_abeec/models/loginUser.dart';
import 'package:capstone_abeec/models/loginUserDB.dart';
import 'package:http/http.dart' as http;

class MyLevel{

  int? totalScore,score,level,exp;

  String? userId = '';

  loginUser? user;

  Future<void> getScore (int x)  async {
    print("ddddd");


      user = await loginUserDB().user();
      print("check $user");
      userId = user?.user_id;
      totalScore = user?.total_score;
      score = user?.score;
      level = user?.level;

    exp = 6 + 4*(level!-1);

    score = score! + x;
    totalScore = totalScore! + x;

    if(score! >= exp!){
      level = level! + 1;
      score = score! - exp!;
    }

    int result = await loginUserDB().insertloginUser(loginUser(user_id: userId,total_score: totalScore,score: score,level: level));
    String url = 'http://54.157.224.91:8080/abeec/user?id='+userId!+'&totalScore='+totalScore!.toString();
    Uri uri = Uri.parse(url);
    http.Response response = await http.post(
      uri,
      headers: <String, String>{
        'Content-Type': 'application/json; charset=UTF-8',
      },
    );
    var responseBody = utf8.decode(response.bodyBytes);
    print("THIIIIIIIIIIIIIIS IS RESPONES     "  + responseBody);

    if(result != 0){
      print("successfully get mission score");
      print("score / exp = $score/$exp");
      print("total Score = $totalScore");
      print("현재 레벨은 $level 입니다.");
    }
    else {
      print("fail");
    }




    //db업데이트 코드 작성



  }

  void UpdateExp(){
    score = score! - exp!;
    exp = 6 + 4*(level!-1);
  }



}