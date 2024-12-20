#include "Player.h"
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "Utility.h"
#include "iostream"

using namespace std;

Player::Player{
	
	name = "Trainer";
	chosenPokemon = Pokemon(); // Using the default Pokemon constructor

	
	// Parameterized constructor
	Player::Player(std::string p_name, Pokemon p_chosenPokemon) {
		name = p_name;
		chosenPokemon = p_chosenPokemon;

	}

	//methods to choose the pokemon
	void Player::choosePokemon(int choice) {
		switch ((PokemonChoice)choice)
		{
		case PokemonChoice::Charmander:
			chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
			break;

		case PokemonChoice::Bulbasaur:
			chosenPokemon = Pokemon("Bulbasur", PokemonType::Grass, 100);
			break;

		case PokemonChoice::Squirtle:
			chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
			break;

		default:
			chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
			break;

		}
		cout << "Player " << name << " chose " << chosenPokemon.name << endl;
		cout << "Press Enter to Continue...." << endl;
		Utility::waitForEnter(); // Wait for user to press Enter before proceeding

	}


};