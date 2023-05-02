#include "Human.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Human::Human() {

}


Human::Human(int newStrength, int newHitpoints)
    :Creature( newStrength, newHitpoints)
{
}

// initialize to human, 10 strength, 10 hitpoints
int Human::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength

    damage = Creature::getDamage();

    return damage;
}

string Human::getSpecies() const {
    return "human";
}