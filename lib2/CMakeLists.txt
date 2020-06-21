add_library(lib2 SHARED src/lib.cpp)
#set_target_properties(lib2 PROPERTIES VERSION 2 SOVERSION 2)
target_include_directories(lib2 PUBLIC public)