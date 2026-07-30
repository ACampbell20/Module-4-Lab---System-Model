#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character
{
protected:
    string name;
    int health;

public:
    Character(string n, int h);

    virtual void attack() = 0;

    void takeDamage(int damage);
    bool isAlive() const;

    string getName() const;
    int getHealth() const;

    virtual ~Character() {}
};

#endif
