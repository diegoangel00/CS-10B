#include "Creature.h"  
#include <queue>    // Provides queue<string>
#include <string>   // Provides string
#include <iostream>
//#include <string>
using namespace std;


Creature::Creature() {

    // initialize to human, 10 strength, 10 hitpoints
    type = 0;                     // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    strength = 10;                 // how much damage this Creature inflicts
    hitpoints = 10;                // how much damage this Creature can sustain
}


Creature::Creature(int newType, int newStrength, int newHitpoints) {

    type = newType;                     // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    strength = newStrength;                 // how much damage this Creature inflicts
    hitpoints = newHitpoints;                // how much damage this Creature can sustain
}

// initialize to human, 10 strength, 10 hitpoints
int Creature::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    // Demons can inflict bonus damage of DEMONIC_BONUS_DAMAGE with a DEMONIC_ATTACK_PROBABILITY chance
    if (type == 2 || type == 1) {
        if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
            damage = damage + DEMONIC_BONUS_DAMAGE;
            cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
        }
    }

    // Elves inflict multiplied magical damage with a MAGICAL_ATTACK_PROBABILITY chance
    if (type == 3) {
        if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= MAGICAL_ATTACK_MULTIPLIER;
        }
    }

    // Balrogs are so fast they get to attack twice
    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        cout << "balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
    }

    return damage;
}





string Creature::getSpecies() const {
    switch (type) {
    case 0: return "human";
    case 1: return "cyberdemon";
    case 2: return "balrog";
    case 3: return "elf";
    }
    return "unknown";
}