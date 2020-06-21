add_library(plugin2 SHARED src/plugin2.cpp)
target_include_directories(plugin2 PUBLIC public)
#set_target_properties(plugin2 PROPERTIES VERSION 2 SOVERSION 2)
target_link_libraries(plugin2
	PRIVATE
        lib2
)