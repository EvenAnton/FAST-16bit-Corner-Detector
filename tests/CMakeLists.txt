enable_testing()

add_executable(OpenCVComparison_test test.cpp) 
target_link_libraries(OpenCVComparison_test ${OpenCV_LIBS} FAST_16bit)

add_test(NAME OpenCVComparison COMMAND OpenCVComparison_test WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}) 


