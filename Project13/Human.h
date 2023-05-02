#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Creature.h"

namespace cs_creature {
    class Human : public Creature {

    public:
        Human();                   // initialize to human, 10 strength, 10 hitpoints
        Human(int newStrength, int newHitpoints);
        int getDamage() const;        // returns the amount of damage this Creature
        std::string getSpecies() const;    // returns the type of the species
        // inflicts in one round of combat

    // also include appropriate accessors and mutators    
    };
}

#endif
