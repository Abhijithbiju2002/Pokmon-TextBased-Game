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
    int attackPower;

    Pokemon();
    Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
    Pokemon(const Pokemon& other);

    bool isFainted() const;
    void heal();
    void attack(Pokemon& target);
    void takeDamage(int damage);

};
