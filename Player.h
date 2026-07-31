#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Potion.h"

class Player : public Character{
private:
    Potion potion;

public:
    Player(string n, int h);

    void attack() override;

    void usePotion();

    Potion getPotion() const;
};

#endif
