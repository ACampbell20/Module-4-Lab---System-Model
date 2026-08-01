#include <iostream>
#include "Weapon.h"

using namespace std;

Weapon::Weapon(string name, int power)
    : Item(name)
{
    attackPower = power;
}

void Weapon::use()
{
    cout << itemName << " used." << endl;
}

int Weapon::getAttackPower() const
{
    return attackPower;
}
