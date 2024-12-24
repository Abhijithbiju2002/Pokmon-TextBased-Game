#pragma once
#include "../include/Pokemon/Grass.h"

class Player;

class Game {
private:
	Grass forestGrass;
public:
	Game();
	void gameLoop(Player& player);
	void visitPokeCenter(Player& player);
};
