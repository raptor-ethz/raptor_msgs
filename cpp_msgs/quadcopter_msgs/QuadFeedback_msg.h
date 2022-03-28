#pragma once
#include "QuadStatus_msg.h"

enum FeedbackType {
  fb_null,
  fb_status,
  fb_arm,
  fb_disarm,
  fb_takeoff,
  fb_land,
  fb_offboard
};

enum ResultType { res_null, res_success, res_fail, res_disaster };

namespace cpp_msg {

struct QuadFeedback_msg {

  FeedbackType feedback;

  QuadStatus_msg status;

  ResultType result;
};

} // namespace cpp_msg