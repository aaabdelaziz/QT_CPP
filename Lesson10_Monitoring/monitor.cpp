#include "monitor.h"

Monitor::Monitor(QObject *parent)
    : QObject{parent}
{}

void Monitor::signalReceived()
{
    qInfo() << "Application is closed";
}
