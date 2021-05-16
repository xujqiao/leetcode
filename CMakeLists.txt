cmake_minimum_required(VERSION 3.6)
project(leetcode2)

set(CMAKE_CXX_STANDARD 11)
# -I
include_directories(/usr/include)

# -L
link_libraries(/usr/lib64)

add_executable(leetcode No5_longest-palindromic-substring.h No41_first-missing-positive.h main.cpp)

target_link_libraries(leetcode gtest gmock)