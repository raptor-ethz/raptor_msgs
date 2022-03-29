add_library(raptor_msgs INTERFACE)

# target_sources(raptor_msgs INTERFACE
#     msgs/Bool_msg.h
#     msgs/Header_msg.h
#     msgs/Float_msg.h
#     msgs/Int_msg.h
#     msgs/String_msg.h
#     msgs/Quaternion_msg.h
#     msgs/Euler_angle_msg.h
#     msgs/Vector3f_msg.h
#     msgs/Vector3i_msg.h
#     msgs/UserCmd_msg.h
#     msgs/Mocap_msg.h
#     msgs/QuadPosCmd_msg.h
#     msgs/QuadVelCmd_msg.h
#     msgs/QuadAction_msg.h
#     msgs/RotGripCmd_msg.h
#     msgs/QuadFeedback_msg.h
#     msgs/QuadStatus_msg.h
# )


target_include_directories(raptor_msgs INTERFACE
    standard_msgs
    quadcopter_msgs
)


target_link_libraries(raptor_msgs INTERFACE
    standard_msgs_lib
    quadcopter_msgs_lib
)


add_subdirectory(standard_msgs)
add_subdirectory(quadcopter_msgs)