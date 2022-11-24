cmake_minimum_required(VERSION 3.23)
project(BOJ)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Problems)


add_executable(Problems_10000_15650 Problems/10000/15650.cpp Problems/10000/15651.cpp Problems/10000/15652.cpp Problems/00000/01764.cpp Problems/00000/05086.cpp Problems/00000/01037.cpp Problems/10000/11050.cpp Problems/10000/11051.cpp)
add_executable(Problems_10000_15651 Problems/10000/15651.cpp)
add_executable(Problems_10000_15652 Problems/10000/15652.cpp)
add_executable(Problems_00000_05086 Problems/00000/05086.cpp)
add_executable(Problems_00000_01037 Problems/00000/01037.cpp)
add_executable(Problems_10000_11050 Problems/10000/11050.cpp)