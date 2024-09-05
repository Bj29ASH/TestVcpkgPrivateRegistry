cmake_minimum_required(VERSION 3.29)
project(TestVcpkgLib)
set(CMAKE_CXX_STANDARD 17)

find_package(DemoAdd CONFIG REQUIRED)

add_executable(TestVcpkgLib src/main.cpp)
target_link_libraries(TestVcpkgLib PRIVATE DemoAdd::DemoAdd)