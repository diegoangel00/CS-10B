#include "Balrog.h"  
#include "Demon.h"  
#include <iostream>

using namespace cs_creature;
using namespace std;

Balrog::Balrog() {


}

Balrog::Balrog(int newStrength, int newHitpoints)
    :Demon( newStrength, newHitpoints)
{
}

// initialize to human, 10 strength, 10 hitpoints
int Balrog::getDamage() const {
    int damage;

    
    // All Creatures inflict damage which is a random number up to their strength
    damage = Demon::getDamage();


    // Balrogs are so fast they get to attack twice
    
    int damage2 = (rand() % Creature::getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;

    return damage+damage2;
}

string Balrog::getSpecies() const {

    return "balrog";

}