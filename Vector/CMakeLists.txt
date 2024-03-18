cmake_minimum_required(VERSION 3.10)
project(VectorExample)

set(CMAKE_CXX_STANDARD 20)

# Add the executable
add_executable(Vector mainvector.cpp vector.cpp)
