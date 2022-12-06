cmake_minimum_required(VERSION 3.21)
project(Logic)

set(CMAKE_CXX_STANDARD 14)

add_executable(Logic main.cpp)

add_subdirectory(AbstractProposition)
target_link_libraries(Logic AbstractProposition)