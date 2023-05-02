#include "Elf.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Elf::Elf() {

}


Elf::Elf(int newStrength, int newHitpoints)
    :Creature( newStrength, newHitpoints)
{
}

// initialize to human, 10 strength, 10 hitpoints
int Elf::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();



    // Elves inflict multiplied magical damage with a MAGICAL_ATTACK_PROBABILITY chance

    if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= MAGICAL_ATTACK_MULTIPLIER;
    }


    return damage;
}


string Elf::getSpecies() const {
    return "elf";
}