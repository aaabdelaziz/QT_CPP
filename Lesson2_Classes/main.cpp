#include <QCoreApplication>
#include <animal.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Start the program";
    animal someAnimal;


    return a.exec();
}
