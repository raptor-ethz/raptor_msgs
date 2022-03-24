#pragma once

enum Action { status, arm, disarm, takeoff, land, offboard };

namespace cpp_msg {

struct QuadAction_msg {

  Action action;
};

} // namespace cpp_msg
