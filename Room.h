#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Enemy.h"
#include "Item.h"
using namespace std;

class Room
{
private:
    string description;
    Enemy* enemy;
    vector<Item*> items;

public:
    Room(string desc = "");

    void setEnemy(Enemy* e);
    void addItem(Item* item);

    string getDescription() const;
    Enemy* getEnemy() const;
    vector<Item*> getItems() const;
};

#endif
