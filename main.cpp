//--------------------------------------------------------------
// ceng - c++ console-level engine for turn-based rpg concept
//--------------------------------------------------------------
// jonathan pierson
// rev. 10/20
//--------------------------------------------------------------

#include <cstdio>
#include <iostream>

using namespace std;

class Creature{
	int HP, MP, Vit, Wis, Dex, Spd, Lck;
public:
	// this is a learning experience. we'll see if there's an easier way to make these later.
	int getHP();
	void setHP(int newHP);
	int getMP();
	void setMP(int newMP);
	int geVit();
	void setVit(int newVit);
	int getWis();
	void setWis(int newWis);
	int getDex();
	void setDex(int newDex);
	int getSpd();
	void setSpd(int newSpd);
	int getLck();
	void setLck(int newLck);
	
};