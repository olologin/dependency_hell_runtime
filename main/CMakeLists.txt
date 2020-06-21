add_executable(main main.cpp)
target_link_libraries(main
	PRIVATE
        plugin2
        plugin1
)