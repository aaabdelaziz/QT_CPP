#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "The test constructor";
}

Test::~Test()
{
    qInfo() << this << "The test destructor";

}
