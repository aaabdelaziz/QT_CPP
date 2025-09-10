#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *parent = new Test(&a);
    parent->dog = new Animal(parent);

    //delete parent;

    /*
     *  a is , dog and parent will be deconstructed, or deleted automatically
     *  as in QT if the parent is deleted, all children will be deleted automatically!
     */
    return 0;
}
