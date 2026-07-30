#include <iostream>
#include "Potion.h"

using namespace std;

Potion::Potion() : Item("Health Potion"){
    healAmount = 25;
}

void Potion::use(){
    cout << "You used a Health Potion and restored "
         << healAmount << " health!" << endl;
}

int Potion::getHealAmount() const{
    return healAmount;
}
