cmake_minimum_required(VERSION 3.29)
project(TestVcpkgLib)
set(CMAKE_CXX_STANDARD 17)

find_package(DemoAdd CONFIG REQUIRED)
find_package(Qt5 CONFIG COMPONENTS Widgets Core Gui Quick OpenGL Sql PrintSupport Multimedia MultimediaWidgets Xml)
find_package(simdis REQUIRED)
find_package(simdis_3rd_party REQUIRED)
find_package(geographiclib REQUIRED)
find_package(polylabel REQUIRED)
find_package(geometryhpp REQUIRED)
find_package(variant REQUIRED)
find_package(easy-profiler REQUIRED)
find_package(imgui REQUIRED)
find_package(vlcQt REQUIRED)
find_package(kd-reports REQUIRED)
find_package(expat CONFIG REQUIRED)
find_package(GPSBabel REQUIRED)
find_package(KDSingleApplication REQUIRED)
find_package(gtest REQUIRED)

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
  expat::expat
  GPSBabel::GPSBabel
  KDSingleApplication::KDSingleApplication
  gtest::gtest
)