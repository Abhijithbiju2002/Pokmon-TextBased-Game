#include "Game.h"
#include "Player.h"
#include "PokemonType.h"
#include "Utility.h"
#include "WildEncounterManager.h"
#include "BattleManager.h"
#include <iostream>
using namespace std;

Game::Game() {
    // Create a sample grass environment with actual Pokemon objects
    forestGrass = { "Forest",
                   {Pokemon("Pidgey", PokemonType::Normal, 40),
                    Pokemon("Caterpie", PokemonType::Grass, 35),
                    Pokemon("Zubat", PokemonType::Fire, 30)},
                   70 };
}

void Game::gameLoop(Player& player) {

    int choice;
    BattleManager battleManager;
    bool keepPlaying = true;

    while (keepPlaying) {
        // Clear console before showing options
        Utility::clearConsole();

        // Display options to the player
        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer(); // Clear the input buffer

        // Process the player's choice and display the corresponding message
        switch (choice) {
        case 1: {
            // Create a scope within case 1
            WildEncounterManager encounterManager;
            Pokemon wildPokemon =
                encounterManager.getRandomPokemonFromGrass(forestGrass);
            battleManager.startBattle(player, wildPokemon);
            break;
        }
        case 2: {
            cout << "You head to the PokeCenter.\\n";
            player.chosenPokemon.heal(); // Heal the player's Pokémon
            std::cout << player.chosenPokemon.name << "'s health is fully restored!\\n";
            break;
        }
        case 5: {
            keepPlaying = false;
            break;
        }
        default: {
            cout << "That's not a valid choice. Try again!\n";
            break;
        }
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        Utility::waitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}