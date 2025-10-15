#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    count = 0;
    // Connect the timer to execute code in timeout
    connect(m_timer, &QTimer::timeout, this, &Test::timeout);
    // Set timer to fire every 1 sec to start the timer
    m_timer->setInterval(1000);
    m_timer->start();


}

void Test::timeout()
{
    qInfo() << "Test";
    qInfo() << ++count;

    if(count >=5)
    {
        m_timer->stop();
        qInfo() << "Timer Stoped, Done!";
    }
}
