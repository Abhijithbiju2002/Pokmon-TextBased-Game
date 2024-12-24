#pragma once
#include "Pokemon.h"


namespace N_Battle;
struct BattleState {
    Pokemon* playerPokemon;  // Pointer to the player's Pok�mon
    Pokemon* wildPokemon;    // Pointer to the wild Pok�mon
    bool playerTurn;          // True if it's the player's turn, false otherwise
    bool battleOngoing;       // True if the battle is still ongoing
};

