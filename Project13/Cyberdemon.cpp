#include "Cyberdemon.h"  
#include "Demon.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Cyberdemon::Cyberdemon() {

    // initialize to human, 10 strength, 10 hitpoints
    strength = 10;                 // how much damage this Creature inflicts
    hitpoints = 10;                // how much damage this Creature can sustain
}


Cyberdemon::Cyberdemon(int newStrength, int newHitpoints) {
    strength = newStrength;                 // how much damage this Creature inflicts
    hitpoints = newHitpoints;                // how much damage this Creature can sustain
}

// initialize to human, 10 strength, 10 hitpoints
int Cyberdemon::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;


    // Demons can inflict bonus damage of DEMONIC_BONUS_DAMAGE with a DEMONIC_ATTACK_PROBABILITY chance
    if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
        damage = damage + DEMONIC_BONUS_DAMAGE;
        cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
    }

    return damage;
}


string Cyberdemon::getSpecies() const {
    return "The cyberdemon";
}