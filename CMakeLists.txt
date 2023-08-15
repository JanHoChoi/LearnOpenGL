cmake_minimum_required(VERSION 3.0)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include)

link_libraries(${CMAKE_SOURCE_DIR}/lib/glfw3.dll)
link_libraries(${CMAKE_SOURCE_DIR}/lib/libglad.a)

add_executable(LearnOpenGL src/main.cpp)
