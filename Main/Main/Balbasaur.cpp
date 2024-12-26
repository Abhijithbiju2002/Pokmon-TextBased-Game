#include "../../../include/Pokemon/Pokemons/Balbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Bulbasaur::Bulbasaur()
            : Pokemon("Bulbasaur", PokemonType::Grass, 110, {
                Move("VINE WHIP", 25),
                Move("TACKLE", 10)
                }) {
        }

        void Bulbasaur::attack(Pokemon* target) {
            selectAndUseMove(target);
        }
    }
}