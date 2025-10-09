#include "animal.h"

Animal::Animal(QObject *parent, char* name_s)
    : QObject{parent}
{

    strcpy(_name, name_s);
    qInfo() << "This is Animal class constructor" << "\n" << "Animal is created as " << _name;
}

Animal::Animal(QObject *parent){


}
