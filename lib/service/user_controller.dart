import 'package:capstone_abeec/models/uid.dart';
import 'package:capstone_abeec/service/user_repository.dart';
import 'package:get/get.dart';


class UserController extends GetxController {

  final UserRepository _userRepository = UserRepository();

  Future<String> join(String id, String name, String password, int age, String phone) async {

    String u_id = await _userRepository.join(id, name, password, age, phone);
    userID = u_id;
    print("userID : $userID");
    return u_id;
  }

  Future<String> idCheck(String id) async{
    String check = await _userRepository.idCheck(id);
    print(check);
    return check;
  }

  Future<int> login(String id,String password) async{
    int check = await _userRepository.login(id, password);
    print(check);
    return check;
  }
}