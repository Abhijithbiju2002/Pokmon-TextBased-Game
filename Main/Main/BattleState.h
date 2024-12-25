#pragma once
#include "../Pokemon/Pokemon.h"

namespace N_Battle
{
    using namespace N_Pokemon;

    struct BattleState {
        Pokemon* playerPokemon;
        Pokemon* wildPokemon;
        bool playerTurn;
        bool battleOngoing;
    };
}