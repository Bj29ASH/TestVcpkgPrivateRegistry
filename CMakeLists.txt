cmake_minimum_required(VERSION 3.29)
project(TestVcpkgLib)
set(CMAKE_CXX_STANDARD 17)

find_package(DemoAdd CONFIG REQUIRED)
find_package(Qt5 CONFIG COMPONENTS Widgets Core Gui)
find_package(simdis)
find_package(simdis_3rd_party)

add_executable(TestVcpkgLib src/main.cpp)
target_link_libraries(TestVcpkgLib PRIVATE
  DemoAdd::DemoAdd
  Qt5::Widgets
  Qt5::Gui
  simdis::simdis
  simdis_3rd_party::simdis_3rd_party
)
