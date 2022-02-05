cmake_minimum_required(VERSION 3.21)
project(homework4)

set(CMAKE_CXX_STANDARD 23)

if(NOT MODE)
    set(MODE File)
endif()

add_library(PRINT${MODE} SHARED printMatrix.cpp print${MODE}.cpp print${MODE}.cpp print${MODE}.h printMatrix.h)
add_library(MATH SHARED matrix.cpp matrix.h)

add_executable(homework4 main.cpp)

target_link_libraries(homework4 PRINT${MODE} MATH)
