#include "Creature.h"  
#include <queue>    // Provides queue<string>
#include <string>   // Provides string
#include <iostream>
using namespace std;
using namespace cs_creature;


Creature::Creature() {

    // initialize to human, 10 strength, 10 hitpoints
    strength = 10;                 // how much damage this Creature inflicts
    hitpoints = 10;                // how much damage this Creature can sustain
}


Creature::Creature(int newStrength, int newHitpoints) {
    strength = newStrength;                 // how much damage this Creature inflicts
    hitpoints = newHitpoints;                // how much damage this Creature can sustain
}

// initialize to human, 10 strength, 10 hitpoints
int Creature::getDamage() const {
    int damage;


    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
}

int Creature::getHitpoints() const {
    return hitpoints;
}

int Creature::getStrength() const {
    return strength;
}

string Creature::getSpecies() const {
    return "Creature";
}