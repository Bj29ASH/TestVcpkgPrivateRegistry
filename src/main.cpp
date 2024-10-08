#include <iostream>
#include <DemoAdd/demo_add.h>
#include <QApplication>
#include <QDebug>
#include <simCore/Calc/Angle.h>
#include <geographiclib/GeographicLib/Accumulator.hpp>
#include <mapbox/polylabel.hpp>
#include <mapbox/variant.hpp>
#include <easy/profiler.h>
#include <BaseGui.h>
#include <vlcQt/VLCQtCore/Audio.h>
#include <vlcQt/VLCQtCore/Common.h>
#include <KDReports/KDReports.h>
#include <expat/expat.h>
#include <GPSBabel/BabelExport.h>
#include <kdsingleapplication.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <spdlog/spdlog/logger.h>

int main(int argc, char** argv) {
  QApplication app(argc, argv);

  auto res = demo::add(10, 20);
  qDebug() << "result is " << res;

  simCore::Vec3 tmp{};
  GeographicLib::Accumulator<double> acc{};

  profiler::color_t color{};
  GUI::BaseGui* gui{}; // imgui

  VlcCommon::setPluginPath("");
  //KDReports::Report report{};

  //BabelExport::WriteFile({}, {}, {}, {});

  spdlog::logger* logger{};

  return app.exec();
}
