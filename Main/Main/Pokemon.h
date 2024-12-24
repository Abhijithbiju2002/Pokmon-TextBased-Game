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
	Pokemon(string p_name, PokemonType p_type, int p_health,int p_maxHealth)
		:name(p_name),type(p_type),maxHealth(p_maxHealth),health(p_maxHealth)

	// Copy constructor
	Pokemon(const Pokemon& other);

	// Destructor
	~Pokemon();

	void attack();

	void takeDamage(int damage);// Method to reduce HP
	bool isFainted()const;// Method to check if the Pokemon has fainted
	void heal(); // Method to restore HP to max

};
