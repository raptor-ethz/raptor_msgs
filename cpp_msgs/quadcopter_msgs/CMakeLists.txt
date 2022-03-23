add_library(quadcopter_msgs_lib INTERFACE)

target_sources(quadcopter_msgs_lib INTERFACE
    Mocap_msg.h
    PosCmd_msg.h
    VelCmd_msg.h
)

target_link_libraries(quadcopter_msgs_lib INTERFACE
    msgs_lib
)