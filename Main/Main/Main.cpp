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
	// default constructors
	Pokemon(){
		name = "unknown";
		type = PokemonType::Fire;
		health = 50;
		cout << "A new Pokemon has been created with the default constructor!"<<endl;
    }
	// Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
		type = p_type;
		health = p_health;
		cout << "A new Pokemon named " << name << " has been created!\n";
	}
	// Copy constructor
	Pokemon(const Pokemon& other) {
		name = other.name;
		type = other.type;
		health = other.health;
		cout << "A new Pokemon has been copied from " << other.name << "!" << endl;
	}
	//Deconstructor
	~Pokemon() {
		cout<< name << " has been released."<<endl;
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

		// Default constructor
		Player() {
			name = "Trainer";
			chosenPokemon = Pokemon(); // Using the default Pokemon constructor
			cout << "A new player named " << name << " has been created!\n";
		}
		// Parameterized constructor
		Player(std::string p_name, Pokemon p_chosenPokemon) {
			name = p_name;
			chosenPokemon = p_chosenPokemon;
			cout << "Player " << name << " has been created!" << endl;
		}

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

  // Parameterized constructor
	  ProfessorOak(string p_name) {
		  name = p_name;
	  }
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
	// Task 1: Test default and parameterized constructors
	Pokemon defaultPokemon; // Using default constructor
	Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor

	cout << "Pokemon Details: " << endl;
	cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth:" << defaultPokemon.health << endl;
	cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << endl;

	// Task 2: Test the copy constructor
	Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100);// Create a Pokemon
	Pokemon bulbasaurCopy = bulbasaur; // Copy the Pokemon
	cout << "Original Pokemon Health: " << bulbasaur.health << endl;
	cout << "Copied Pokemon Health: " << bulbasaurCopy.health << endl;


	// Modify the copy
	bulbasaurCopy.health = 80;
	cout << "After Modification:" <<endl;
	cout << "Original Pokemon Health: " << bulbasaur.health <<endl;
	cout << "Copied Pokemon Health: " << bulbasaurCopy.health <<endl;


	// Task 3: Test the destructor
	Pokemon squirtle("Squirtle", PokemonType::Water, 100); // Pokemon will be destroyed at the end of this scope
    // Destructor will be called here

    // Continue with the main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player("Ash", charmander);
	
	// Greet the player and offer Pokemon choices 
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Conclude the first chapter 
	cout<<"Professor Oak : "<<player.chosenPokemon.name<<" and you " << player.name<< ", are going to be the best of friends!"<<endl;
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!"<< endl;




	return 0;
}
