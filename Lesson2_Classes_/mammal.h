#ifndef MAMMAL_H
#define MAMMAL_H

#include <QObject>
#include "animal.h"


class Mammal : public QObject, public Animal
{
    Q_OBJECT;

public:
    explicit Mammal(QObject *parent = nullptr);
    // explicit Mammal(QObject *parent = nullptr, char* animal_name=nullptr);

    bool hasBackBone()
    {
        return true;
    }

signals:
};

#endif // MAMMAL_H
