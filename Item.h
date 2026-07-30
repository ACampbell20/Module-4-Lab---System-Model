#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item{
protected:
    string itemName;

public:
    Item(string name);

    virtual void use() = 0;

    string getItemName() const;

    virtual ~Item() {}
};

#endif
