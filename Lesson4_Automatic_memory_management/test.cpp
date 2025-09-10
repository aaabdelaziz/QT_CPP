#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << Q_FUNC_INFO;
    qInfo() << this << "The test constructor";
}

Test::~Test()
{
    qInfo() << this << Q_FUNC_INFO;
    qInfo() << this << "The test destructor";

}

void Test::doSomething()
{
    // Print all information about the function
    qInfo() << this << Q_FUNC_INFO;

}
