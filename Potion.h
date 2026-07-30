#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item{
private:
    int healAmount;

public:
    Potion();

    void use() override;

    int getHealAmount() const;
};

#endif
