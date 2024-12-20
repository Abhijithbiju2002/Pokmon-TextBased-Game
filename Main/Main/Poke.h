#pragma once
#include <string>
#include "PokemonType.h"
using namespace std;

class Pokeman {
public:
	string name;
	PokemonType type;
	int health;

	// Default constructor
	Pokemon();

	// Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health);

	// Copy constructor
	Pokemon(const Pokemon& other);

	// Destructor
	~Pokemon();

	void attack();

};
