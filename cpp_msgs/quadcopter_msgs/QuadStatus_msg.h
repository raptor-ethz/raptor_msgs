#pragma once

namespace cpp_msg {

struct QuadStatus_msg {

  int battery;

  bool armable;

  bool local_position_ok;
};

} // namespace cpp_msg
