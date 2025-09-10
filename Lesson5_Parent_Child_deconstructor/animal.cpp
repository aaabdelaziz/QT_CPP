#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Animal constructor";
}

Animal::~Animal()
{
    qInfo() << this << "Animal destructor";
}
