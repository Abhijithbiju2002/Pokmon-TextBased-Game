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
        void Squirtle::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "RAPID SPIN")
            {
                // Random number of hits between 2 and 5
                int hits = (rand() % 4) + 2;

                // Split damage across hits
                for (int i = 0; i < hits; ++i) {
                    Pokemon::attack(selectedMove, target);
                }

                std::cout << "... and hit " << hits << " times!\\n";
            }
        }
    }
}