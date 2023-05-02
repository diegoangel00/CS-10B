#include <iostream>
#include "Human.h"  
#include "Elf.h"  
#include "Demon.h"  
#include "Balrog.h"  
#include "Cyberdemon.h"  


using namespace cs_creature;
using namespace std;

void battleArena(Creature& Creature1, Creature& Creature2);

int main() {
	//srand(static_cast<unsigned>(time(nullptr)));
	//Default Tests
	Human h1;
	Elf e1;
	Cyberdemon c1;
	Balrog b1;

	//Human tests
	cout << endl << "----- Testing Default Humans vs. World -----" << endl;
	battleArena(h1, e1);
	battleArena(h1, c1);
	battleArena(h1, b1);

	//Elf tests
	cout << endl << "----- Testing Default Elfs vs. World -----" << endl;
	battleArena(e1, c1);
	battleArena(e1, b1);

	//Demon Tests
	cout << endl << "----- Testing Default Demons Hierarchy -----" << endl;
	battleArena(c1, b1);

	//Testing known tie scenarios
	cout << endl << "----- Testing Tie Scenarios-----" << endl;
	Elf eT(10, 1);
	Balrog bT(10, 1);
	Human hT(10, 1);
	Cyberdemon cT(10, 1);
	battleArena(eT, bT);
	battleArena(hT, eT);
	battleArena(bT, cT);



	//Non-Default Tests
	Elf e(50, 50);
	Balrog b(50, 50);
	Human h(20, 30);
	Cyberdemon c(60, 70);

	//Human Tests
	cout << endl << "----- Testing Random Humans vs. World -----" << endl;
	for (int i = 0; i < 3; i++) {
		battleArena(h, e);
		battleArena(h, c);
		battleArena(h, b);
	}

	//Elf tests
	cout << endl << "----- Testing Random Elfs vs. World -----" << endl;
	for (int i = 0; i < 3; i++) {
		battleArena(e, c);
		battleArena(e, b);
	}

	//Demon Tests
	cout << endl << "----- Testing Demon Hierarchy -----" << endl;
	for (int i = 0; i < 5; i++) {
		battleArena(c, b);
	}

}

void battleArena(Creature& Creature1, Creature& Creature2) {
	//defines the damage to be enacted this round
	int damage1, damage2;
	//getHP only needs to be called once 
	cout << "New Battle between " << Creature1.getSpecies() << " and " << Creature2.getSpecies() << endl;
	cout << Creature1.getSpecies() << " Initial HP: " << Creature1.getHitpoints() << endl;
	cout << Creature2.getSpecies() << " Initial HP: " << Creature2.getHitpoints() << endl;

	int hp1 = Creature1.getHitpoints();
	int hp2 = Creature2.getHitpoints();
	do{
		//Damage Setup stage 
		damage1 = Creature1.getDamage();
		damage2 = Creature2.getDamage();

		//attack stage
		hp1 = hp1 - damage2;
		hp2 = hp2 - damage1;

		//checking the state of the battle
	} while (hp1 > 0 && hp2 > 0);

	//Outputing who was victorious in the battle
	if (hp1 < 0 && hp2 < 0)
		cout << "Battle ended in a Tie" << endl << endl;
	else if (hp1 < 0 && hp2 >= 0)
		cout << Creature2.getSpecies() << " Was Victorious" << endl<<endl;
	else
		cout << Creature1.getSpecies() << " Was Victorious" << endl <<endl;


	//Displays Final HP of Species
	cout << Creature1.getSpecies() << " Final HP: " << hp1 << endl;
	cout << Creature2.getSpecies() << " Final HP: " << hp2 << endl<<endl;

}