#pragma once
#include <string>

namespace cpp_msg {

struct Header_msg {

  int timestamp;
  int id;
  std::string description;
};

} // namespace cpp_msg