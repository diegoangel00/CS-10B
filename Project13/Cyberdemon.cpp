#include "Cyberdemon.h"  
#include "Demon.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Cyberdemon::Cyberdemon() {
}

Cyberdemon::Cyberdemon(int newStrength, int newHitpoints)
:Demon(newStrength,newHitpoints)
{
}


// initialize to human, 10 strength, 10 hitpoints
int Cyberdemon::getDamage() const {
    int damage;
    // All Creatures inflict damage which is a random number up to their strength

    damage = Demon::getDamage();

    return damage;
}


string Cyberdemon::getSpecies() const {
    return "cyberdemon";
}