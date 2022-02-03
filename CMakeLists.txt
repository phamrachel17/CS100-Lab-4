cmake_minimum_required(VERSION 3.17)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(area_perimeter_calculator
    src/main.cpp
    src/rectangle.cpp
)

ADD_EXECUTABLE(test
    tests/test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
