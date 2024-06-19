cmake_minimum_required(VERSION 3.6.0)
project(cllib)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB_RECURSE INC_FILES include/*.h)
file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(cllib ${INC_FILES} ${SRC_FILES})
include_directories(cllib include)

