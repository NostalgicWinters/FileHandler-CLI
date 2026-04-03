# CMakeLists.txt
   cmake_minimum_required(VERSION 3.10)
   project(cross_platform_tool)

   add_executable(${PROJECT_NAME} src/main.cpp)
   CXX_FLAGS = -std=c++20
