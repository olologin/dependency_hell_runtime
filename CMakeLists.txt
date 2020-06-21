set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(lib1)
add_subdirectory(lib2)
add_subdirectory(main)
add_subdirectory(plugin1)
add_subdirectory(plugin2)