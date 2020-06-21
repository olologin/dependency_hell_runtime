add_library(lib1 SHARED src/lib.cpp)
#set_target_properties(lib1 PROPERTIES VERSION 1 SOVERSION 1)
target_include_directories(lib1 PUBLIC public)