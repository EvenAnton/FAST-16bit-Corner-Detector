cmake_minimum_required(VERSION 3.0.0)
project(fast VERSION 0.1.0)


find_package(OpenCV REQUIRED)

add_executable(fast main.cpp  fast.hpp fast.cpp) 

target_link_libraries(fast ${OpenCV_LIBS})

