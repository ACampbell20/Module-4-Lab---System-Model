#include "Item.h"

Item::Item(string name){
    itemName = name;
}

string Item::getItemName() const{
    return itemName;
}
