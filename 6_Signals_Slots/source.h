#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>
#include <QDebug>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);

    // Add a test send function
    void testSend();

signals:
    // Create a signal
    void mySignal(QString msg);

public slots:
    void static mySlot(QString msg);
};

#endif // SOURCE_H
