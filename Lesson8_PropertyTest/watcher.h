#ifndef WATCHER_H
#define WATCHER_H

#include <QObject>
#include <QDebug>

// the watcher is the consumer here
class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent = nullptr);

signals:

public slots:  // means anything outside the class can also see this method
    void messageChanged(QString message);
};

#endif // WATCHER_H
