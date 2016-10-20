//--------------------------------------------------------------
// ceng - c++ console-level engine for turn-based rpg concept
//--------------------------------------------------------------
// jonathan pierson
// rev. 10/20
//--------------------------------------------------------------

#include <cstdio>
#include <iostream>

using namespace std;

// modify this value to add or remove debug messages from the console
static bool DEBUG = true;

class Creature{
	int CurrentHP, MaxHP, CurrentMP, MaxMP, Vit, Wis, Dex, Spd, Lck;
	char *Name;
public:
	Creature();
	Creature(int HP, int MP, int Vit, int Wis, int Dex, int Spd, int Lck, char *Name);
	int getStat(int statID);
	void setStat(int statID, int newVal);
	char getName();
	void setName(char *newName);

};

Creature::Creature() {
	MaxHP = 1;
	CurrentHP = MaxHP;
	MaxMP = 1;
	CurrentMP = MaxMP;
	Vit = 1;
	Wis = 1;
	Dex = 1;
	Spd = 1;
	Lck = 1;
	Name = "Creature";
	if (DEBUG) {
		printf("[DEBUG] Creature generated. Default constructor.\n");
	}
}

Creature::Creature(int newHP, int newMP, int newVit, int newWis, int newDex, int newSpd, int newLck, char *newName) {
	MaxHP = newHP;
	CurrentHP = MaxHP;
	MaxMP = newMP;
	CurrentMP = MaxMP;
	Vit = newVit;
	Wis = newWis;
	Dex = newDex;
	Spd = newSpd;
	Lck = newLck;
	Name = newName;
	if (DEBUG) {
		printf("[DEBUG] Creature generated. Advanced constructor.\n        ");
		printf(Name);
		printf(": [%i/%i %i/%i %i VIT %i WIS %i DEX %i SPD %i LCK]\n", CurrentHP, MaxHP, CurrentMP, MaxMP, Vit, Wis, Dex, Spd, Lck);
	}
}

int Creature::getStat(int statID) {
	switch(statID) {
		case 1: return CurrentHP;
		case 2: return MaxHP;
		case 3: return CurrentMP;
		case 4: return MaxMP;
		case 5: return Vit;
		case 6: return Wis;
		case 7: return Dex;
		case 8: return Spd;
		case 9: return Lck;
	}
}

void Creature::setStat(int statID, int newVal) {
	switch(statID) {
		case 1: CurrentHP = newVal; break;
		case 2: MaxHP = newVal; break;
		case 3: CurrentMP = newVal; break;
		case 4: MaxMP = newVal; break;
		case 5: Vit = newVal; break;
		case 6: Wis = newVal; break;
		case 7: Dex = newVal; break;
		case 8: Spd = newVal; break;
		case 9: Lck = newVal; break;
	}
}

char Creature::getName() {
	return *Name;
}

void Creature::setName(char *newName) {
	Name = newName;
}

int main() {
	printf("[        c e n g        ]\n");
	printf("[  version indev 10/20  ]\n");
	Creature demo(20,15,3,6,4,7,9,"Wizard");
	if (DEBUG) {
		printf("[DEBUG] Execution complete.");
	}
	return 0;
}