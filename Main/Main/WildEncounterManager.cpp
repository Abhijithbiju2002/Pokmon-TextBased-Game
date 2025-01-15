
#include "WildEncounterManager.h"
#include "Grass.h"
#include "Pokemon.h"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

namespace N_Battle
{
    using namespace N_Pokemon;

    WildEncounterManager::WildEncounterManager() {
        srand(time(0)); // Seed the random number generator
    }

    Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
        int randomIndex = rand() % grass.wildPokemonList.size();

        Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];

        return wildPokemon;
    }
}