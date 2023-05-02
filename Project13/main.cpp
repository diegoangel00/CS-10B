#include <iostream>
#include "Human.h"  
#include "Elf.h"  
#include "Demon.h"  
#include "Balrog.h"  
#include "Cyberdemon.h"  


using namespace cs_creature;
using namespace std;

int main() {

    // Comment this line out before submitting to zyBooks!
    //srand(static_cast<unsigned>(time(nullptr)));

    Human h1;
    Elf e1;
    Cyberdemon c1;
    Balrog b1;

    Human h(20, 30);
    Elf e(40, 50);
    Cyberdemon c(60, 70);
    Balrog b(80, 90);


    cout << "default human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;

    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++) {
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++) {
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++) {
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++) {
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
}

/*
Here is the correct output. Your output should match this exactly except where random numbers are used.

default human strength/hitpoints: 10/10
default elf strength/hitpoints: 10/10
default cyberdemon strength/hitpoints: 10/10
default balrog strength/hitpoints: 10/10
non-default human strength/hitpoints: 20/30
non-default elf strength/hitpoints: 40/50
non-default cyberdemon strength/hitpoints: 60/70
non-default balrog strength/hitpoints: 80/90


Examples of human damage:
The human attacks for 8 points!
 Total damage = 8

The human attacks for 13 points!
 Total damage = 13

The human attacks for 1 points!
 Total damage = 1

The human attacks for 14 points!
 Total damage = 14

The human attacks for 10 points!
 Total damage = 10

The human attacks for 1 points!
 Total damage = 1

The human attacks for 18 points!
 Total damage = 18

The human attacks for 12 points!
 Total damage = 12

The human attacks for 20 points!
 Total damage = 20

The human attacks for 8 points!
 Total damage = 8


Examples of elf damage:
The elf attacks for 22 points!
 Total damage = 22

The elf attacks for 32 points!
 Total damage = 32

The elf attacks for 38 points!
Magical attack inflicts 38 additional damage points!
 Total damage = 76

The elf attacks for 11 points!
Magical attack inflicts 11 additional damage points!
 Total damage = 22

The elf attacks for 16 points!
 Total damage = 16

The elf attacks for 27 points!
 Total damage = 27

The elf attacks for 22 points!
Magical attack inflicts 22 additional damage points!
 Total damage = 44

The elf attacks for 38 points!
 Total damage = 38

The elf attacks for 1 points!
Magical attack inflicts 1 additional damage points!
 Total damage = 2

The elf attacks for 5 points!
Magical attack inflicts 5 additional damage points!
 Total damage = 10


Examples of cyberdemon damage:
The cyberdemon attacks for 30 points!
 Total damage = 30

The cyberdemon attacks for 36 points!
 Total damage = 36

The cyberdemon attacks for 37 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 87

The cyberdemon attacks for 7 points!
 Total damage = 7

The cyberdemon attacks for 10 points!
 Total damage = 10

The cyberdemon attacks for 14 points!
 Total damage = 14

The cyberdemon attacks for 6 points!
 Total damage = 6

The cyberdemon attacks for 25 points!
 Total damage = 25

The cyberdemon attacks for 16 points!
 Total damage = 16

The cyberdemon attacks for 13 points!
 Total damage = 13


Examples of balrog damage:
The balrog attacks for 14 points!
Demonic attack inflicts 50 additional damage points!
balrog speed attack inflicts 77 additional damage points!
 Total damage = 141

The balrog attacks for 57 points!
balrog speed attack inflicts 67 additional damage points!
 Total damage = 124

The balrog attacks for 27 points!
balrog speed attack inflicts 19 additional damage points!
 Total damage = 46

The balrog attacks for 23 points!
balrog speed attack inflicts 64 additional damage points!
 Total damage = 87

The balrog attacks for 64 points!
balrog speed attack inflicts 12 additional damage points!
 Total damage = 76

The balrog attacks for 70 points!
balrog speed attack inflicts 33 additional damage points!
 Total damage = 103

The balrog attacks for 17 points!
balrog speed attack inflicts 69 additional damage points!
 Total damage = 86

The balrog attacks for 79 points!
balrog speed attack inflicts 57 additional damage points!
 Total damage = 136

The balrog attacks for 54 points!
balrog speed attack inflicts 6 additional damage points!
 Total damage = 60

The balrog attacks for 66 points!
Demonic attack inflicts 50 additional damage points!
balrog speed attack inflicts 74 additional damage points!
 Total damage = 190
*/