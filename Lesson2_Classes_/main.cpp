#include <QCoreApplication>
#include "mammal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << " Start the program";

    Mammal mammal();



    return a.exec();
}
