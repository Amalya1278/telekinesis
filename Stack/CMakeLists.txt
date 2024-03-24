cmake_minimum_required(VERSION 3.10)
project(StackExample)

set(CMAKE_CXX_STANDARD 20)

# Add the executable
add_executable(Stack mainstack.cpp stack.cpp)
