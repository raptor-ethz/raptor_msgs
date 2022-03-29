#pragma once

enum User_cmd { ui_null, ui_status, ui_land, ui_emg_land, ui_hover };

namespace cpp_msg {

struct UserCmd_msg {

  User_cmd command;
};

} // namespace cpp_msg
