#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

class Creature{
	string Name;
	int Id;
	bool Pc;
public:
	Creature();
	Creature(string iName, int iId, bool iPc);
	string getName();
	int getId();
	bool getPc();
};

Creature::Creature() {
	Name = "Unknown Creature";
	Id = -1;
	Pc = false;
}

Creature::Creature(string iName, int iId, bool iPc) {
	Name = iName;
	Id = iId;
	Pc = iPc;
}

string Creature::getName() {
	return Name;
}

bool Creature::getPc() {
	return Pc;
}

int Creature::getId() {
	return Id;
}

class Battle{
	vector<Creature> Team1, Team2;
public:
	Battle();
	Battle(vector<Creature> iTeam1, vector<Creature> iTeam2);
};

Battle::Battle() {
	printf("We did it!\n");
}

Battle::Battle(vector<Creature> iTeam1, vector<Creature> iTeam2) {
	Team1 = iTeam1;
	Team2 = iTeam2;
	printf("We did it! A battle is on.\n");
	cout << "This battle is between ";
	if (Team1.back().getPc()){
		cout << "PC " << Team1.back().getName() << " (ID " << Team1.back().getId() << ") and ";
	}
	else {
		cout << Team1.back().getName() << " (ID " << Team1.back().getId() << ") and ";
	}
	if (Team2.back().getPc()){
		cout << "PC " << Team2.back().getName() << " (ID " << Team2.back().getId() << ")";
	}
	else {
		cout << Team2.back().getName() << " (ID " << Team2.back().getId() << ")";
	}
	cout << ".\n";

}

int main() {
	Creature guy1("Masterless Lightshedder", 1, true);
	Creature guy2("Shadow Wraith", 2, false);
	vector<Creature> goodGuys;
	goodGuys.push_back(guy1);
	vector<Creature> badGuys;
	badGuys.push_back(guy2);
	Battle btl(goodGuys, badGuys);
	return 0;
}