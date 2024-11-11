add_library(ExampleLibrary SHARED "src/examplelibrary.cpp" "include/examplelibrary.hpp")
target_compile_definitions(ExampleLibrary PRIVATE EXPORT_SYMBOLS)
target_include_directories(ExampleLibrary PUBLIC include)

enable_testing()

add_subdirectory(tests)