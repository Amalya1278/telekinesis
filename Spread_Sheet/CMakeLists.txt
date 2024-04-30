cmake_minimum_required(VERSION 3.10)
project(SheetExample)

set(CMAKE_CXX_STANDARD 20)

# Add the executable
add_executable(sheet main.cpp sheet.cpp cell.cpp)
