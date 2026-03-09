cmake_minimum_required(VERSION 3.10)
project(MathApp)

set(CMAKE_CXX_STANDARD 11)

# Thư mục chứa header
include_directories(include)

# 1. Tạo thư viện Math (để tái sử dụng)
add_library(MathLib src/math_utils.cpp)

# 2. Tạo file thực thi chính
add_executable(app src/main.cpp)
target_link_libraries(app MathLib)

# 3. Tạo file thực thi Unit Test
add_executable(run_tests tests/test_math.cpp)
target_link_libraries(run_tests MathLib)
