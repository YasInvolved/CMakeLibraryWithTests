set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(gtest)
add_executable(test_shadowblade "test_examplelibrary.cpp")
target_link_libraries(test_shadowblade gtest_main ExampleLibrary)