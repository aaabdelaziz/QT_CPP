#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{}

void Destination::mySlot(QString msg)
{
    qInfo() << "Receiver: A signal is received at mySlot: ";
    qInfo() << msg;
}

void Destination::testReply()
{
    qInfo() << " Reply back";
    // you can also emit signal from destination to source also
    emit mySignal("Receiver: Receive Aknowledge!");

}
