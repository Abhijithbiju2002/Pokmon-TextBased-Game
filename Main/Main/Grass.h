#pragma once
#include<string>
#include<vector>
using namespace std;

struct Grass
{
	string environmentType; // Example: "Forest", "Cave", "Riverbank"
	vector<Pokemon>wildPokemonList; // List of wild Pokémon that live in this grass
	int encounterRate;  // Likelihood of encountering a wild Pokémon, out of 100
};
Grass forestGrass = {
	"Forest",
	{{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}},
	70
};
Grass caveGrass = {
	"Cave",
	{{"Zubat", PokemonType::POISON, 30}, {"Geodude", PokemonType::ROCK, 50}},
	80
};