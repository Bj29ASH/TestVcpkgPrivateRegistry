#include <iostream>
#include <DemoAdd/demo_add.h>
#include <QApplication>
#include <QDebug>

int main(int argc, char** argv) {
  QApplication app(argc, argv);

  auto res = demo::add(10, 20);
  qDebug() << "result is " << res;

  return app.exec();
}
