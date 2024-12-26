#include "iostream"
#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Utility/Utility.h"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/Pokemons/Squirtle.h"

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
            case PokemonChoice::CHARMANDER:
                chosenPokemon = new Charmander();
                break;
            case PokemonChoice::BULBASAUR:
                chosenPokemon = new Bulbasaur();
                break;
            case PokemonChoice::SQUIRTLE:
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