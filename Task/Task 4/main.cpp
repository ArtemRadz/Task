#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TrafficLight *trafficLight = new TrafficLight;
    trafficLight->show();
    return app.exec();
}

