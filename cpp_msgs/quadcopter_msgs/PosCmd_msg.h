#pragma once
#include "Header_msg.h"
#include "Position_msg.h"

namespace cpp_msg {

struct PosCmd_msg {

  Header_msg header;

  Position_msg position;

  float yaw_angle;
};

} // namespace cpp_msg