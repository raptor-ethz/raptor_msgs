#pragma once

enum User_cmd { null, status, land, emg_land, hover};

namespace cpp_msg {

struct UserCmd_msg {

  User_cmd command;
};

} // namespace cpp_msg
