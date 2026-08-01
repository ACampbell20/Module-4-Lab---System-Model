#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include <string>
using namespace std;

class Weapon : public Item
{
private:
    int attackPower;

public:
    Weapon(string name, int power);

    void use() override;

    int getAttackPower() const;
};

#endif
