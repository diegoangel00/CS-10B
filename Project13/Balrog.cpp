#include "Balrog.h"  
#include "Demon.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Balrog::Balrog() {

    // initialize to human, 10 strength, 10 hitpoints
    strength = 10;                 // how much damage this Creature inflicts
    hitpoints = 10;                // how much damage this Creature can sustain
}


Balrog::Balrog( int newStrength, int newHitpoints) {
    strength = newStrength;                 // how much damage this Creature inflicts
    hitpoints = newHitpoints;                // how much damage this Creature can sustain
}

// initialize to human, 10 strength, 10 hitpoints
int Balrog::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    //damage = Demon::getDamage();

    // Balrogs are so fast they get to attack twice
    int damage2 = (rand() % strength) + 1;
    cout << "balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;

    return damage;
}

string Balrog::getSpecies() const {

    return "The Balrog";

}