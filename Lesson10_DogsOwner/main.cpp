#include <QCoreApplication>
#include <owner.h>
#include <dog.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner owner;
    Dog dog;

    QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats);


    // Somewhere else
    for(int i=0; i < 10; i++)
    {
        //QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats,Qt::UniqueConnection);
        QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats,Qt::AutoConnection);

    }

    owner.giveSnacks();

    return a.exec();
}
