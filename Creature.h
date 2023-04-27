#pragma once

using namespace std;

class Creature {
private:
    int type;                     // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength;                 // how much damage this Creature inflicts
    int hitpoints;                // how much damage this Creature can sustain
    string getSpecies() const;    // returns the type of the species

    static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
    static const int DEMONIC_BONUS_DAMAGE = 50;
    static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
    static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
    static const int DEFAULT_STRENGTH = 10;
    static const int DEFAULT_HITPOINTS = 10;
public:
    Creature();                   // initialize to human, 10 strength, 10 hitpoints
    Creature(int newType, int newStrength, int newHitpoints);
    virtual int getDamage() const;        // returns the amount of damage this Creature
    // inflicts in one round of combat

// also include appropriate accessors and mutators    
};



class Cyberdemon : public Creature {




};

class Demon : public Creature {




};

class Elf : public Creature {




};

class Human : public Creature {




};

