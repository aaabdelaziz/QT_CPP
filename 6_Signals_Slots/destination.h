#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr);

    // Add a test send function
    void testReply();

signals:
    // You can also add slots and signals even in same class
    void mySignal(QString msg);

    // Add slots
public slots:
    void static mySlot(QString msg);

};

#endif // DESTINATION_H
