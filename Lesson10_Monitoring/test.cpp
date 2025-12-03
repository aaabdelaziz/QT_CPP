#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{

}

void Test::applicationClose()
{
    emit sendAction();
}

// void Test::sendAction()  // You shouldn't implement a signal
// {
//     qInfo() << "Application is going to close";
// }
