#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{}

void Source::testSend()
{

    // Will emit some signal here
    emit mySignal(" Hello ! I'm the sender");

}

void Source::mySlot(QString msg)
{
    qInfo() << "Source: A signal is received at mySlot: ";
    qInfo() << msg;
}
