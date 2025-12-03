#ifndef MONITOR_H
#define MONITOR_H

#include <QObject>
#include <QDebug>

class Monitor : public QObject
{
    Q_OBJECT
public:
    explicit Monitor(QObject *parent = nullptr);

public slots:
    void signalReceived();
};

#endif // MONITOR_H
