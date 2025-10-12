#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject
{
    Q_OBJECT
    QString m_message;

public:
    explicit Test(QObject *parent = nullptr);

    /* Declaring a property called message with Type QString, the getter function is message(),
    and the setter function called setMessage, and the class declares a signal messageChange, emit the signal in SetMessage
    when the value changed */
    Q_PROPERTY(QString message READ getMessage WRITE setMessage NOTIFY messageChanged);   // Property name is message

    QString getMessage() const;
    void setMessage(const QString &newMessage);

signals:
    void messageChanged(QString message);

};

#endif // TEST_H
