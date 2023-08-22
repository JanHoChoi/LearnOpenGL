cmake_minimum_required(VERSION 3.5)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include)

link_libraries(${CMAKE_SOURCE_DIR}/lib/glfw3.dll)
link_libraries(${CMAKE_SOURCE_DIR}/lib/libglad.a)

add_executable(LearnOpenGL src/main.cpp)

add_custom_command(TARGET LearnOpenGL POST_BUILD		# Adds a post-build event to project
	COMMAND ${CMAKE_COMMAND} -E copy_directory			# which executes "cmake - E copy_if_different..."
	"${PROJECT_SOURCE_DIR}/lib/"				# <--this is in-file
	$<TARGET_FILE_DIR:LearnOpenGL>)						# <--this is out-file path
