#pragma once
#include <string>
namespace cpp_msg
{

  struct MocapMarker_msg
  {

    std::string object_name;

    int length;

    bool occluded[10];

    float marker_x[10];
    float marker_y[10];
    float marker_z[10];
  };

} // namespace cpp_msg
