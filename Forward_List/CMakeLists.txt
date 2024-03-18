cmake_minimum_required(VERSION 3.10)
project(ForwardListExample)

set(CMAKE_CXX_STANDARD 20)

# Add the executable
add_executable(Forward mainforwardlist.cpp forward_list.cpp)
