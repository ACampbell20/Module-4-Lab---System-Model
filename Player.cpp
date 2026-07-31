#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(string n, int h)
    : Character(n, h){
}

void Player::attack(){
    cout << name << " swings a sword for 20 damage!" << endl;
}

void Player::usePotion(){
    potion.use();

    health += potion.getHealAmount();

    cout << name << "'s health is now "
         << health << "." << endl;
}

Potion Player::getPotion() const{
    return potion;
}
