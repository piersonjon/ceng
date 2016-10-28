#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

// TURN
// a turn consists of the action taken by a creature.
// realistically, we should probably implement 2 vectors of actions: one element for each character on each side of the fight.
// that way, we can access this data by passing it easily and maintaining a soft of ID number for all functions.

class Turn {
	int action;
public:
	Turn();
	int get_action();
};

Turn::Turn() {
	// see get_action().
	action = (rand()%4)+1;
}

int Turn::get_action() {
	// this is where an AI script would cover for a creature.
	// alternatively, this is where the player will be prompted to make a move.
	// for now, it simply reflects the AI being RNG in the constructor.
	// this function serves more to debug for demonstration purposes and to tweak.
	return action;
}


class Battle {
	vector <Turn> actions;
public:
	Battle();
	~Battle();
	void take_turn();
	void replay();
};

// the constructor for what happens every time a fight breaks out.
// could also include custom text for the message box upon entering the battle screen, etc.
// ie: Battle newbtl("Welcome to the tutorial!\n");
// for now, just declares that a fight has broken out in the terminal.
Battle::Battle() {
	printf("A battle is on!\n");
}

void Battle::take_turn() {
	Turn this_turn;
	actions.push_back(this_turn);
	printf("It is now turn %i.\n",actions.size());
	printf("This turn, action %i was taken.\n",actions.back().get_action());
}

void Battle::replay() {
	printf("TURN | ACTION\n");
	printf("-----|-------\n");
	for (int i=0;i<actions.size();i++) {
		if (i<9) {
			printf("  %i  |  %i\n",i+1,actions[i].get_action());
		}
		else {
			printf("  %i |  %i\n",i+1,actions[i].get_action());
		}
		
	}
}

Battle::~Battle() {
	printf("The battle is over!\nHere's a recap:\n");
	replay();
}

int main() {
	srand(time(NULL));
	Battle newBattle;
	for (int i=1;i<31;i++) {
		newBattle.take_turn();
	}
	printf("This is the end of the program.\n");
	return 0;
}