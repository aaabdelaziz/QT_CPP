#include <QCoreApplication>
#include <monitor.h>
#include <test.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Monitor monitor;
    Test test;

    QObject::connect(&test, &Test::applicationClose,&monitor,&Monitor::signalReceived);
    test.applicationClose();

    int value = a.exec();
    qInfo() << "Exit Code " << value;

    return value;
}
