#include "Charmander.h"
#include "PokemonType.h"
#include "Move.h"
#include <iostream>

#include "Utility.h"

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Charmander::Charmander()
            : Pokemon("Charmander", PokemonType::Fire, 95, {
                Move("EMBER", 20),
                Move("SCRATCH", 15),
                Move("BLAZING CHARGE", 70)
                }) {
        }

        void Charmander::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                // Recoil effect: Charmander takes recoil damage
                this->takeDamage(10); // Fixed recoil damage
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }

    }
}