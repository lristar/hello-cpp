cmake_minimum_required(VERSION 3.15)
project(hello_cpp)

set(CMAKE_CXX_STANDARD 14)

include(${PROJECT_SOURCE_DIR}/build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(hello_cpp main.cpp)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})