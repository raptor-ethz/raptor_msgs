add_library(standard_msgs_lib INTERFACE)

target_sources(standard_msgs_lib INTERFACE
    Bool_msg.h
    Header_msg.h
    Float_msg.h
    Int_msg.h
    String_msg.h
    Quaternion_msg.h
    Euler_angle_msg.h
    Vector3f_msg.h
    Vector3i_msg.h
)

target_link_libraries(standard_msgs_lib INTERFACE
    msgs_lib
)