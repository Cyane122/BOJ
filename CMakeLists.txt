cmake_minimum_required(VERSION 3.23)
project(BOJ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Problems)

# add_executable(BOJ
#        Problems/00000/01806.cpp Problems/00000/02750.cpp Problems/10000/10989.cpp Problems/00000/01427.cpp Problems/10000/11650.cpp Problems/10000/10872.cpp Problems/10000/10870.cpp Problems/20000/25501.cpp Problems/10000/10250.cpp)

add_executable(Problems_10000_10250 Problems/10000/10250.cpp)
add_executable(Problems_10000_10870 Problems/10000/10870.cpp)
add_executable(Problems_10000_10872 Problems/10000/10872.cpp)
add_executable(Problems_10000_10989 Problems/10000/10989.cpp)
add_executable(Problems_10000_11650 Problems/10000/11650.cpp)
add_executable(Problems_00000_02750 Problems/00000/02750.cpp)
add_executable(Problems_00000_01806 Problems/00000/01806.cpp)
add_executable(Problems_00000_01427 Problems/00000/01427.cpp)
add_executable(Problems_20000_25501 Problems/20000/25501.cpp)
add_executable(Problems_00000_02869 Problems/00000/02869.cpp)
add_executable(Problems_20000_24416 Problems/20000/24416.cpp)