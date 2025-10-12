#include "radio.h"

// Radio will be listening to a station
Radio::Radio(QObject *parent)
    : QObject{parent}
{

}

void Radio::listen(int channel, QString name, QString message)
{
    qInfo() << channel << " - "  << name << " - "  << message ;
}
