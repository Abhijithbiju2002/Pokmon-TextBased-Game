// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Game.h"
#include "../include/Character/Player/Player.h"
#include"PokemonChoice.h"
#include "PokemonType.h"
#include "ProfessorOak.h"
#include "Utility.h"
#include <iostream>
#include <limits> // Include this header to use numeric_limits
#include <string>
using namespace std;

int main()
{
	// Continue with the main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player;

	// Greet the player and offer Pokemon choices
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Explain the main quest
	professor.explainMainQuest(player);

	// Start the main game loop
	Game game;
	game.gameLoop(player);





	return 0;

}
