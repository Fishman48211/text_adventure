#ifndef ITEM_H
#define ITEM_H

#include "stdlib.h"

struct Key {
    char *name;
    int id;
};

struct Weapon {
    char *name;
    float damage;
};

struct Heal {
    char *name;
    float amount;
    float risk_percent;
};

enum ItemType {
    key,
    weapon,
    heal
};

struct Item {
    enum ItemType type;
    union Item {
        struct Key key;
        struct Weapon weapon;
        struct Heal heal;
    } item;
};

void generate_item(struct Item *item, int rarity);

#endif