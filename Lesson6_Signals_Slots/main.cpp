#include <QCoreApplication>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Use a connecting function
    Source oSource;
    Destination oDestination;

    // Connect the source with the destination, to handle any signals come from Source
    // (&Source Obj, Source ClassName, &Receiver Obj, Destination ClassName)
    QObject::connect(&oSource, &Source::mySignal,&oDestination,&Destination::mySlot);

    // Connect the Destination to Source, to handle any signals come from Destination
    QObject::connect(&oDestination, &Destination::mySignal,&oSource,&Source::mySlot);

    // Emit the signal from source
    oSource.testSend();
    // Emit reply Signal from Destination
    oDestination.testReply();


    return a.exec();
}
