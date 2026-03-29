cmake_minimum_required(VERSION 3.10)

project(RoboticsCPP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(robotic_cpp/include)

add_executable(robotic_cpp
    main.cpp
    robotic_cpp/src/Vector2D.cpp
    robotic_cpp/src/Matrix2D.cpp
)