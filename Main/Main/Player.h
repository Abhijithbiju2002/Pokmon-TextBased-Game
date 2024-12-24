#pragma once
#include <string>
#include "../Pokemon.h"
using namespace std;


namespace N_Player;

class Player {

public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(string p_name, Pokemon p_chosePokemon);

	void choosePokemon(int choice); // Method to choose a Pokemon
};