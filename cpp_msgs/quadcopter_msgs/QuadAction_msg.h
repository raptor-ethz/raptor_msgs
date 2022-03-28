#pragma once

enum Action_cmd {
  act_status,
  act_arm,
  act_disarm,
  act_takeoff,
  act_land,
  act_offboard
};

namespace cpp_msg {

struct QuadAction_msg {

  Action_cmd action;
};

} // namespace cpp_msg
