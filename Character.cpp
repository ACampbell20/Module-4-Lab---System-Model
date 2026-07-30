#include "Character.h"

Character::Character(string n, int h)
{
    name = n;
    health = h;
}

void Character::takeDamage(int damage)
{
    health -= damage;

    if (health < 0)
        health = 0;
}

bool Character::isAlive() const
{
    return health > 0;
}

string Character::getName() const
{
    return name;
}

int Character::getHealth() const
{
    return health;
}
