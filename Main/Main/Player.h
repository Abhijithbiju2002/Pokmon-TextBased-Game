#pragma once
#include <string>
#include "Poke.h"
using namespace std;

class Pokemon;

class Player {

public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(string p_name, Pokemon p_chosePokemon);

	void choosePokemon(int choice); // Method to choose a Pokemon
};