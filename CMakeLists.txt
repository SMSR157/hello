cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(LABFINAL LANGUAGES CXX)

# set(GTEST_DIR /opt/homebrew/opt/googletest)
set(GTEST_DIR ${CMAKE_SOURCE_DIR}/googletest)

include_directories(${GTEST_DIR}/googletest/include)

# Add your source files
add_executable(${PROJECT_NAME} 
    src/factory_method.cpp
    test/test.cpp
)

# Link Google Test libraries
target_link_libraries(${PROJECT_NAME} 
        ${GTEST_DIR}/build/lib/libgtest.a
        ${GTEST_DIR}/build/lib/libgtest_main.a
)