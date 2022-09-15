file(GLOB_RECURSE C_SOURCES ./*.c)

add_executable(main ${C_SOURCES})
target_link_libraries(main m)

