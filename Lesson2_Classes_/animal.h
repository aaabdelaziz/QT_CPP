#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT;
    char* _name;
public:
    explicit Animal(QObject *parent = nullptr);
    explicit Animal(QObject *parent = nullptr, char* name_s=nullptr);

signals:
};

#endif // ANIMAL_H
