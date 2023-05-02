#ifndef DEMON_H
#define DEMON_H

#include <iostream>
#include "Creature.h"

namespace cs_creature {
    class Demon : public Creature {
    private:
        
        //std::string getSpecies() const;    // returns the type of the species
        int strength;                 // how much damage this Creature inflicts
        int hitpoints;                // how much damage this Creature can sustain

        static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
        static const int DEMONIC_BONUS_DAMAGE = 50;
        static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
        static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
        static const int DEFAULT_STRENGTH = 10;
        static const int DEFAULT_HITPOINTS = 10;
    public:
        Demon();                   // initialize to human, 10 strength, 10 hitpoints
        Demon(int newStrength, int newHitpoints);
        virtual int getDamage() const;        // returns the amount of damage this Creature
        std::string getSpecies() const;    // returns the type of the species
        // inflicts in one round of combat

    // also include appropriate accessors and mutators    
    };
}
#endif