#ifndef ITEM_H
#define ITEM_H

#include "stdlib.h"

const int key_adjectives_count = 5;
const char *key_adjectives[] = {
    "Rusty",
    "Bent",
    "Pristine",
    "Normal",
    "Bloodied"
};

const int tier1_weapon_adjectives_count = 1;
const char *tier1_weapon_adjectives[] = {
    "Rusty",
};

const int tier2_weapon_adjectives_count = 1;
const char *tier2_weapon_adjectives[] = {
    "Acceptable",
};

const int tier3_weapon_adjectives_count = 2;
const char *tier3_weapon_adjectives[] = {
    "Windswept",
    "Legendary",
};

const int tier3_weapon_postfixes_count = 1;
const char *tier3_weapon_postfixes[] = {
    "of the Serendipitous",
};

const int weapon_materials_count = 5;
const char *weapon_materials[] = {
    "Copper",
    "Iron",
    "Steel",
    "Wood",
    "Stone",
};

const int weapon_types_count = 8;
const char *weapon_types[] = {
    "Shortsword",
    "Longsword",
    "Broadsword",
    "Shovel",
    "Glaive",
    "Pike",
    "Spear",
    "Throwing Knives",
};

const int heal_adjectives_count = 5;
const char *heal_adjectives[] = {
    "Longevity",
    "Healing",
    "Repair",
    "Prosperity",
    "Recovery",
};

const int heal_type_count = 4;
const char *heal_type[] = {
    "Flask",
    "Potion",
    "Elixir",
    "Drug",
};

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