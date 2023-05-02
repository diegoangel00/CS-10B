#ifndef BALROG_H
#define BALROG_H
#include "Creature.h"

#pragma once
namespace cs_creature {
    class Balrog : public Creature {
    private:
        //std::string getSpecies() const;    // returns the type of the species


        static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
        static const int DEMONIC_BONUS_DAMAGE = 50;
        static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
        static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
        static const int DEFAULT_STRENGTH = 10;
        static const int DEFAULT_HITPOINTS = 10;
    public:
        Balrog();                   // initialize to human, 10 strength, 10 hitpoints
        Balrog( int newStrength, int newHitpoints);

        int getDamage() const;        // returns the amount of damage this Creature
        std::string getSpecies() const;    // returns the type of the species
        // inflicts in one round of combat

    // also include appropriate accessors and mutators    
    };
}
#endif