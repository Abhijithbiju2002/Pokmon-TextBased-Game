#pragma once
#include <string>
enum class PokemonType;
using namespace std;

class Pokemon {
public:
	string name;
	PokemonType type;
	int health;
	int maxHealth;

	// Default constructor
	Pokemon();

	// Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health);

	// Copy constructor
	Pokemon(const Pokemon& other);

	// Destructor
	~Pokemon();

	void attack();

	void takeDamage(int damage);// Method to reduce HP
	bool isFainted()const;// Method to check if the Pokemon has fainted

};
