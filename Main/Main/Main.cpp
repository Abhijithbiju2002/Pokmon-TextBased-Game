// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;



enum class PokemonChoice
{
	Charmander = 1,
	Bulbasaur,
	Squirtle,
	InvalidChoice
};
enum class PokemonType {
	Fire,
	Grass,
	Water,
	Electric
};


class Pokemon
{
	
 public:
	string name;
	PokemonType type;
	int health;

	// Created 2 constructors
	Pokemon(){

    }
	Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
		type = p_type;
		health = p_health;
	}

	void Attack() {
		cout << name << " attacks with a powerful move!" << endl;
	}
};

class Player {
  public:
		//attributies
		string name;
		Pokemon chosenPokemon;

		//methods to choose the pokemon
		void choosePokemon(int choice) {
			switch (PokemonChoice(choice))
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
			
		}


};

class ProfessorOak {
  public:
	  string name;

  void greetPlayer(Player & player) {
	  cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
	  cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
	  cout << name << ": But enough about me. Let's talk about you!"<< endl;
  }

  // Method to ask the player to choose a Pokemon
  void offerPokemonChoices(Player& player) {

	  cout << name << ": First, tell me, what’s your name?"<< endl;
	  getline(cin, player.name);
	  cout << name << ": Ah, " << player.name << "! What a fantastic name!"<< endl;
	  cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;

	  // Presenting Pokemon choices 
	  cout << name << " : I have three Pokemon here with me. They’re all quite feisty!" <<endl;
	  cout << name << " : Choose wisley...\n";std::cout << "1.Charmander - The fire type. A real hothead!" << endl;
	  cout << "2. Bulbasaur - The grass type. Calm and collected!"<< endl;
	  cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

      int choice;
	  cout << name << ": So, which one will it be? Enter the number of your choice: ";
	  cin >> choice;
	  player.choosePokemon(choice);
    
  }


};

int main()
{
	// Creating Objects of ProfessorOak, Pokemon and Player class

	ProfessorOak professor;
	Pokemon placeholderPokemon;
	Player player;

	//Assigning Values to placeholderPokemon attributes
	placeholderPokemon.name = "Pikachu";
	placeholderPokemon.type = PokemonType::Electric;
	placeholderPokemon.health = 40;

	//Assigning Values to player attributes
	player.name = "Trainer";

	//Assigning Values to ProfessorOak attributes
	professor.name = "Proffesor Oak";

	// Greet the player and offer Pokemon choices 
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Conclude the first chapter 
	cout<<"Professor Oak : "<<player.chosenPokemon.name<<" and you " << player.name<< ", are going to be the best of friends!"<<endl;
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!"<< endl;




	return 0;
}
