#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
    : player("Player", 100),
      enemy("Enemy", 50, 15){
}

void Game::startGame(){
    Character* character;

    cout << "Game Started\n\n";

    character = &player;
    character->attack();

    enemy.takeDamage(20);

    cout << "Enemy Health: "
         << enemy.getHealth() << endl;

    character = &enemy;
    character->attack();

    player.takeDamage(enemy.getDamage());

    cout << "Player Health: "
         << player.getHealth() << endl;

    player.usePotion();

    cout << "Player Health: "
         << player.getHealth() << endl;

    if (enemy.isAlive())
        cout << "Enemy is still alive." << endl;
    else
        cout << "Enemy defeated." << endl;
}
