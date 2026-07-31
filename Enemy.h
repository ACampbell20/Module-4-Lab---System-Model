#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

class Enemy : public Character
{
private:
    int damage;

public:
    Enemy(string n, int h, int d);

    void attack() override;

    int getDamage() const;
};

#endif
