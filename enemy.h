#ifndef ENEMY_H
#define ENEMY_H

struct EnemyStatRanges {
    float health_min;
    float health_max;
    float damage_min;
    float damage_max;
    float block_percent_min;
    float block_percent_max;
    float recover_amount_min;
    float recover_amount_max;
};

const struct EnemyStatRanges tier1_stats = {10, 20, 2.5, 4.5, 0.5, 0.6, 7, 9};
const struct EnemyStatRanges tier2_stats = {30, 50, 7.5, 13, 0.6, 0.65, 18, 28};
const struct EnemyStatRanges tier3_stats = {70, 100, 15, 18.5, 0.7, 0.8, 50, 60};

const int tier1_prefixes_count = 18;
const char *tier1_prefixes[] = {
    "Common",
    "Mundane",
    "Normal",
    "Lazy",
    "Weak",
    "Ill",
    "Feeble",
    "Frail",
    "Cowardly",
    "Sickly",
    "Rudimentary",
    "Ill-equipped",
    "Mediocre",
    "Immature",
    "Impatient",
    "Impoverished",
    "Smelly",
    "Squeamish",
};

const int tier1_types_count = 3;
const char *tier1_types[] = {
    "Goblin",
    "Skeleton",
    "Kobold",
};

const int tier2_prefixes_count = 13;
const char *tier2_prefixes[] = {
    "Bandaged",
    "Semiprofessional",
    "Self-Confident",
    "Barbaric",
    "Shady",
    "Shocking",
    "Bizarre",
    "Skilled",
    "Boastful",
    "Infuriated",
    "Brazen",
    "Introspective",
    "Strategic",
};

const int tier2_prefixes_count = 3;
const char *tier2_types[] = {
    "Thief",
    "Ogre",
    "Fighter",
};

const int tier3_prefixes_count = 9;
const char *tier3_prefixes[] = {
    "Malevolent",
    "Ruinous",
    "Heretical",
    "Industrious",
    "Disgraced",
    "Harrowing",
    "Tenebrous",
    "Coldhearted",
    "Demonic",
};

const int tier3_names_count = 1;
const char *tier3_names[] = {
    "Gary",
};

const int tier3_types_count = 7;
const char *tier3_types[] = {
    "Monster",
    "Cultist",
    "Warrior",
    "Assassin",
    "Beast",
    "Abomination",
    "Demon",
};

const int tier3_postfixes_count = 11;
const char *tier3_postfixes[] = {
    "Maliciousness",
    "Malintent",
    "Significance",
    "Blasphemy",
    "Skill",
    "Entrepreneurship",
    "Shadows",
    "Tenacity",
    "Calculatedness",
    "Atrocity",
    "Stealth",
};

struct Enemy {
    char *name;
    float health;
    float damage;
    float block_percent;
    float recover_amount;
};

void generate_enemy(struct Enemy *enemy, int rarity);

#endif