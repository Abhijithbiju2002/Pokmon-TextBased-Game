#include "iostream"
#include "Player.h"
#include "PokemonChoice.h"
#include "Pikachu.h"
#include "Utility.h"
#include "Bulbasaur"
#include "Charmander.h"
#include "Squirtle.h"

namespace N_Character
{
    namespace N_Player
    {
        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
        }

        Player::Player(std::string p_name) {
            name = p_name;
        }

        void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice) {
            case PokemonChoice::Charmander:
                chosenPokemon = new Charmander();
                break;
            case PokemonChoice::Bulbasaur:
                chosenPokemon = new Bulbasaur();
                break;
            case PokemonChoice::Squirtle:
                chosenPokemon = new Squirtle();
                break;
            default:
                chosenPokemon = new Pikachu();
                break;
            }
            std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before
            // proceeding
        }
    }
}