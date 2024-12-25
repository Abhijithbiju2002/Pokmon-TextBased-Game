#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Utility/Utility.h"
#include "iostream"

namespace N_Character
{
    namespace N_Player
    {
        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
            chosenPokemon = new Pokemon(); // Using the default Pokemon constructor
        }

        Player::Player(std::string p_name, Pokemon* p_chosenPokemon) {
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice) {
            case PokemonChoice::Charmander:
                chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10);
                break;
            case PokemonChoice::Bulbasaur:
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
                break;
            case PokemonChoice::Squirtle:
                chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9);
                break;
            default:
                chosenPokemon = Pikachu();
                break;
            }
            std::cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before
            // proceeding
        }
    }
}