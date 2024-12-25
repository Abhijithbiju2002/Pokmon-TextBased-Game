#pragma once
#include <string>
enum class PokemonType;
using namespace std;

namespace N_Pokemon;
class Pokemon {
protected:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
public:
    Pokemon();
    Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
    Pokemon(const Pokemon& other);

    bool isFainted() const;
    void heal();
    void attack(Pokemon& target);
    void takeDamage(int damage);

};
