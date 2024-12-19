#pragma once
#include <string>
#include "PokemonType.h"
#include "PokemonChoice.h"
#include "Utility.h"
using namespace std;

class Player {

public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(string p_name, Pokemon p_chosePokemon);

	void choosePokemon(int choice); // Method to choose a Pokemon
};