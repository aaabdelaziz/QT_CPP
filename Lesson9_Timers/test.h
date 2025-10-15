#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QTimer>

// https://doc.qt.io/qt-6/qtimer.html


class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

public slots:
    void timeout();

private:
    QTimer *m_timer = new QTimer(this);
    int count=0;
};

#endif // TEST_H
