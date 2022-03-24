#pragma once

enum Action_cmd { status, arm, disarm, takeoff, land, offboard };

namespace cpp_msg {

struct QuadAction_msg {

  Action_cmd action;
};

} // namespace cpp_msg
