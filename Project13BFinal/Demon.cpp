#include "Demon.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Demon::Demon() {
}


Demon::Demon(int newStrength, int newHitpoints)
    :Creature(newStrength, newHitpoints)
{
}


int Demon::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();

    // Demons can inflict bonus damage of DEMONIC_BONUS_DAMAGE with a DEMONIC_ATTACK_PROBABILITY chance

    if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
        damage = damage + DEMONIC_BONUS_DAMAGE;
        cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
    }


    return damage;
}



string Demon::getSpecies() const {

    return "demon";

}
