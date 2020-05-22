#include <QApplication>

#include "Snake.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  Snake window;
  window.show();
  return app.exec();
}
