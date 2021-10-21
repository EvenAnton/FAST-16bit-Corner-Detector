cmake_minimum_required(VERSION 3.0.0)
project(fast VERSION 0.1.0)


find_package(OpenCV REQUIRED)

add_library(FAST_16bit src/fast.hpp src/fast.cpp src/fast_9.cpp src/nonmax.cpp)
target_link_libraries(FAST_16bit ${OpenCV_LIBS})
target_include_directories(FAST_16bit PUBLIC src)


if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()