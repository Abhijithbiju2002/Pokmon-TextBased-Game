#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::supersonic(Pokemon* target) {
            cout << name << " uses Supersonic on " << target->name << "!\n";
            target->takeDamage(20);
        }
        void Zubat::attack(Move selectedMove, Pokemon* target) {
            // Call the base class method from child class.
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                    this->health = this->maxHealth;

                std::cout << "... and regained health!\n";
            }
        }

    }
}