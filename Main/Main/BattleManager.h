#pragma once
#include "Pokemon.h"
#include "BattleState.h"
#include "Player.h"

class BattleManager {
public:
	void startBattle(Player& player, Pokemon& wildPokemon);
private:
    BattleState battleState;  // New BattleState object to track the battle

	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome(Player& player, bool playerWon);

    void battle();
    void handleBattleOutcome();
    void updateBattleState(); // Method to update the battle state after each turn


};

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {

    battleState.playerPokemon = &player.chosenPokemon;
    battleState.wildPokemon = &wildPokemon;
    battleState.playerTurn = true;  // Player starts first
    battleState.battleOngoing = true;

    std::cout << "A wild " << wildPokemon.name << " appeared!\\n";
    battle();
}

void BattleManager::battle() {
    while (battleState.battleOngoing) {
        if (battleState.playerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pokémon's turn to attack
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        // Update the battle state after the turn
        updateBattleState();

        // Switch turns
        battleState.playerTurn = !battleState.playerTurn;

        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome();
}
void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (battleState.playerPokemon->isFainted()) {
        std::cout << battleState.playerPokemon->name<< " has fainted! You lose the battle.\\n";
    }
    else {
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
    }
}

