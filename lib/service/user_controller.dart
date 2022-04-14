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
}