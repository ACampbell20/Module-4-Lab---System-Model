#include "Room.h"

Room::Room(string desc)
{
    description = desc;
    enemy = nullptr;
}

void Room::setEnemy(Enemy* e)
{
    enemy = e;
}

void Room::addItem(Item* item)
{
    items.push_back(item);
}

string Room::getDescription() const
{
    return description;
}

Enemy* Room::getEnemy() const
{
    return enemy;
}

vector<Item*> Room::getItems() const
{
    return items;
}
