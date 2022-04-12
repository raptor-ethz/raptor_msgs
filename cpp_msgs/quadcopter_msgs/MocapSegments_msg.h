#pragma once
#include <string>
namespace cpp_msg
{

  struct MocapSegments_msg
  {

    std::string object_name;

    int length;

    float segment_x[10];
    float segment_y[10];
    float segment_z[10];
  };

} // namespace cpp_msg
