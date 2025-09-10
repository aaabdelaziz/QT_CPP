#include <animal.h>

animal::animal(QObject *parent)
    : QObject{parent}
{

    qInfo() << "This class is constructed" << endl;
}
