#pragma once
#include "Pokemon.h"
#include "Player.h"

class BattleManager {
public:
	void startBattle(Player& player, Pokemon& wildPokemon);
private:
	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome(Player& player, bool playerWon);

};

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
	std::cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        // Player attacks first
        playerPokemon.attack(wildPokemon);

        // Check if wild Pok�mon fainted
        if (!wildPokemon.isFainted()) {
            // Wild Pok�mon attacks back
            wildPokemon.attack(playerPokemon);
        }

        // Pause to show the result of each turn
        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome(playerPokemon, playerPokemon.isFainted());
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (playerWon) {
        std::cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pok�mon's health.\n";
    }
    else {
        std::cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}

