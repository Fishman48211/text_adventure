#include "enemy.h"

// Tier 1
// [prefix] [type]

// Tier 2
// [prefix] [type]

// Tier 3
// [name] the [prefix] [type] of [postfix]

void generate_enemy_tier1(struct Enemy *Enemy) {
    
}

void generate_enemy_tier2(struct Enemy *Enemy) {
    
}

void generate_enemy_tier3(struct Enemy *Enemy) {
    
}

void generate_enemy(struct Enemy *enemy, int rarity) {
    switch (rarity) {
        case 1: generate_enemy_tier1(enemy); return;
        case 2: generate_enemy_tier2(enemy); return;
        case 3: generate_enemy_tier3(enemy); return;
        default: return;
    }
}