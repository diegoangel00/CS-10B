#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include <iostream>
#include "Creature.h"

namespace cs_creature {
    class Cyberdemon : public Creature {
    private:
        //std::string getSpecies() const;    // returns the type of the species


        static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
        static const int DEMONIC_BONUS_DAMAGE = 50;
        static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
        static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
        static const int DEFAULT_STRENGTH = 10;
        static const int DEFAULT_HITPOINTS = 10;
    public:
        Cyberdemon();                   // initialize to human, 10 strength, 10 hitpoints
        Cyberdemon(int newStrength, int newHitpoints);
        int getDamage() const;        // returns the amount of damage this Creature
        std::string getSpecies() const;    // returns the type of the species
        // inflicts in one round of combat

    // also include appropriate accessors and mutators    
    };
}
#endif