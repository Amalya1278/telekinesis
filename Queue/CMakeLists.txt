cmake_minimum_required(VERSION 3.10)
project(QueueExample)

set(CMAKE_CXX_STANDARD 20)

# Add the executable
add_executable(queue mainqueue.cpp queue.cpp)
