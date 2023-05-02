#include "Elf.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Elf::Elf() {

    // initialize to human, 10 strength, 10 hitpoints
    strength = 10;                 // how much damage this Creature inflicts
    hitpoints = 10;                // how much damage this Creature can sustain
}


Elf::Elf(int newStrength, int newHitpoints) {

    strength = newStrength;                 // how much damage this Creature inflicts
    hitpoints = newHitpoints;                // how much damage this Creature can sustain
}

// initialize to human, 10 strength, 10 hitpoints
int Elf::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;


    if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= MAGICAL_ATTACK_MULTIPLIER;
    }

    return damage;
}


string Elf::getSpecies() const {
    return "The elf";
}