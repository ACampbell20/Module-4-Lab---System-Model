#include <iostream>
#include "Enemy.h"

using namespace std;

Enemy::Enemy(string n, int h, int d)
    : Character(n, h){
    damage = d;
}

void Enemy::attack(){
    cout << name << " attacks for "
         << damage << " damage!" << endl;
}

int Enemy::getDamage() const{
    return damage;
}
