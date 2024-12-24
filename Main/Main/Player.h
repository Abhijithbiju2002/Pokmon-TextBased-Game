#pragma once
#include <string>
#include "../include/Pokemon/Pokemon.h"
using namespace std;



class Player {

public:
	string name;
	Pokemon chosenPokemon;

	Player();
	Player(string p_name, Pokemon p_chosePokemon);

	void choosePokemon(int choice); // Method to choose a Pokemon
};