add_library(plugin1 SHARED src/plugin1.cpp)
target_include_directories(plugin1 PUBLIC public)
#set_target_properties(plugin1 PROPERTIES VERSION 1 SOVERSION 1)
target_link_libraries(plugin1
	PRIVATE
        lib1
)