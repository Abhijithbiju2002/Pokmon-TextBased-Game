#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Squirtle::waterSpalsh(Pokemon& target) {
            cout << name << " uses Water splash on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}