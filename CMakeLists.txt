cmake_minimum_required(VERSION 3.29)
project(TestVcpkgLib)
set(CMAKE_CXX_STANDARD 17)

find_package(DemoAdd CONFIG REQUIRED)
find_package(Qt5 CONFIG COMPONENTS Widgets Core Gui Quick OpenGL Sql PrintSupport Multimedia MultimediaWidgets Xml)
find_package(simdis)
find_package(simdis_3rd_party)
find_package(geographiclib)
find_package(polylabel)
find_package(geometryhpp)
find_package(variant)
find_package(easy-profiler)
find_package(imgui)
find_package(vlcQt)
find_package(kd-reports)

add_executable(TestVcpkgLib src/main.cpp)
target_link_libraries(TestVcpkgLib PRIVATE
  DemoAdd::DemoAdd
  Qt5::Widgets
  Qt5::Gui
  Qt5::Sql
  Qt5::Quick
  Qt5::OpenGL
  Qt5::Widgets
  Qt5::Multimedia
  Qt5::MultimediaWidgets
  Qt5::PrintSupport
  Qt5::Xml
  simdis::simdis
  simdis_3rd_party::simdis_3rd_party
  geographiclib::geographiclib
  polylabel::polylabel
  geometryhpp::geometryhpp
  variant::variant
  easy-profiler::easy-profiler
  imgui::imgui
  vlcQt::vlcQt
  kd-reports::kd-reports
)