#pragma once
#include <string>

namespace cpp_msg {

struct Header_msg {

  long timestamp;
  long id;
  std::string description;
};

} // namespace cpp_msg