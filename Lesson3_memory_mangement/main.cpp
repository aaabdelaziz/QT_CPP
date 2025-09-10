#include <QCoreApplication>
#include <QDebug>

void display(QString *value)
{
    qInfo() << "The pointer adress :" << value;
    qInfo() << "The pointer points to address :" << &value;
    qInfo() << "The pointer data :" << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Ahmed";
    QString *description = new QString("Checking Pointer Address");
    display(description);

    // must to delete the pointer at end to free the heap
    delete description;

    //Note that if you recalled the function after ptr deletion
    display(description);

    return a.exec();
}
