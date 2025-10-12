#include <QCoreApplication>
#include <test.h>
#include <watcher.h>
#include <QVariant>   // It's a wrapper for other data types

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test tester;
    Watcher destination;

    QObject::connect(&tester, &Test::messageChanged, &destination, &Watcher::messageChanged);

    tester.setProperty("message",QVariant("Hello World")); // this will look for a property called 'message'
    tester.setMessage("testing ..");

    return a.exec();
}
