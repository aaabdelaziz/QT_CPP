#ifndef STATION_H
#define STATION_H

#include <QObject>
#include <QString>
#include <QDebug>

// Learn here how to disconnect a signal from a slot
class Station : public QObject
{
    Q_OBJECT
public:
    QString name;
    int channel;

    explicit Station(QObject *parent = nullptr, int channel=0, QString name="Unkonwn");

signals:
    void send(int channel, QString name, QString message);

public slots:
    void broadcast(QString message);
};

#endif // STATION_H
