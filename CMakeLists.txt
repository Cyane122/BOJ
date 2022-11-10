cmake_minimum_required(VERSION 3.23)
project(BOJ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Problems)

add_executable(BOJ
        Problems/00000/01806.cpp Problems/00000/02750.cpp Problems/10000/10989.cpp Problems/00000/01427.cpp Problems/10000/11650.cpp Problems/10000/10872.cpp Problems/10000/10870.cpp Problems/20000/25501.cpp)
