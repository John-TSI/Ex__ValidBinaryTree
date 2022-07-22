cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(98_ValidBinaryTree VERSION 1.0.0)

set(SRC_FILES src/node.cpp src/solution.cpp)
add_executable(98_ValidBinaryTree src/main.cpp ${SRC_FILES})

target_include_directories(98_ValidBinaryTree PUBLIC inc)

