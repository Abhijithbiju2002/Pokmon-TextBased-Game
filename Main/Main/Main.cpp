// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "PokemonType.h"
#include"PokemonChoice.h"
#include "Utility.h"
#include <limits> // Include this header to use numeric_limits
using namespace std;



// Pokemon class definition
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
		type = PokemonType::Normal;
		health = 50;
		
    }
	// Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health) {
		name = p_name;
		type = p_type;
		health = p_health;
		;
	}
	// Copy constructor
	Pokemon(const Pokemon& other) {
		name = other.name;
		type = other.type;
		health = other.health;
		
	}
	//Deconstructor
	~Pokemon() {
		// Destructor message removed
	}

	void Attack() {
		cout << name << " attacks with a powerful move!" << endl;
	}
};
#include "Player.h"


// ProfessorOak class definition
class ProfessorOak {
  public:
	  string name;

  // Parameterized constructor
	  ProfessorOak(string p_name) {
		  name = p_name;
	  }
  void greetPlayer(Player & player) {
	  cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter(); 

	  cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();
	 

	  cout << name << ": But enough about me. Let's talk about you!"<< endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();
  }

  // Method to ask the player to choose a Pokemon
  void offerPokemonChoices(Player& player) {

	  cout << name << ": First, tell me, what’s your name?"<< endl;

	  getline(cin, player.name);
	  cout << name << ": Ah, " << player.name << "! What a fantastic name!"<< endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  // Presenting Pokemon choices 
	  cout << name << " : I have three Pokemon here with me. They’re all quite feisty!" <<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();
	  cout << name << " : Choose wisley...\n";std::cout << "1.Charmander - The fire type. A real hothead!" << endl;
	  cout << "2. Bulbasaur - The grass type. Calm and collected!"<< endl;
	  cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

      int choice;
	  cout << name << ": So, which one will it be? Enter the number of your choice: ";
	  cin >> choice;
	  player.choosePokemon(choice);
	  Utility::waitForEnter();
    
  }

  void explainMainQuest(Player& player) {

	  // Clear the console
	  Utility::clearConsole();
	 
 
	  cout << "Professor Oak: Oak-ay " << player.name << "!,I am about to explain you about your upcoming grand adventure." << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!" << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "\n" << player.name << ":Wait... that sounds a lot  like every other Pokémon game out there..." << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: Shhh! Don't break the fourth wall,"<<player.name<<"!,This is serious business!"<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter(); 

	  cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<< endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();


	  cout << "\n" << player.name << ": Sounds like a walk in the park... right?"<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!"<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins..."<<endl;
	  cout << "Press Enter to Continue...." << endl;
	  Utility::waitForEnter();

	  cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
	 
	  Utility::waitForEnter();


  }


};
void gameLoop(Player & player) {

	int choice;
	bool keepPlaying = true;

	while (keepPlaying)
	{
		// Clear console before showing options  -> clear all previous mssg which was on the screen 
		Utility::clearConsole();

		// Display options to the player

		cout << "What would you like to do next " << player.name << "?" << endl;
		cout << "1. Battle Wild Pokémon"<<endl;
		cout << "2. Visit PokeCenter"<<endl;
		cout << "3. Challenge Gyms"<<endl;
		cout << "4. Enter Pokémon League"<<endl;
		cout << "5. Quit"<<endl;
		cout << "Enter your choice: ";
		cin >> choice;

		// Clear the newline character left in the buffer after cin >> choice
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		// Process the player's choice and display the corresponding message
		switch (choice)
		{
		case 1:
			cout << "You look around... but all the wild Pokémon are on "
				"vacation. Maybe try again later?"<<endl;
			cout << "Press Enter to Continue...." << endl;
			break;

		case 2:
			cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
				"break. Guess your Pokémon will have to tough it out for now!" << endl;
			cout << "Press Enter to Continue...." << endl;
			break;

		case 3:
			cout << "You march up to the Gym, but it's closed for renovations. "
				"Seems like even Gym Leaders need a break!" << endl;
			cout << "Press Enter to Continue...." << endl;
			break;

		case 4:
			cout << "You boldly step towards the Pokémon League... but the "
				"gatekeeper laughs and says, 'Maybe next time, champ!" << endl;
			cout << "Press Enter to Continue...." << endl;
			break;

		case 5:
			cout << "You try to quit, but Professor Oak's voice echoes: "
				"'There's no quitting in Pokémon training!"<< endl;
			cout << "Are you sure you want to quit? (y/n): ";

			char quitChoice;

			cin >> quitChoice;
			if (quitChoice == 'y' || quitChoice == 'Y') {
				keepPlaying = false;
			}
			break;
		default:
			cout << " That's not a valid choice. Try again!" << endl;
			break;
		
		}
		// Wait for Enter key before the screen is cleared and the menu is shown
	    // again
		Utility::waitForEnter();
    }
	cout << "Goodbye, " << player.name << "! Thanks for playing!"<<endl;

}

int main()
{
	// Task 1: Test default and parameterized constructors
	  // Create Pokemon and Player objects for the game
	Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor

	// Continue with the main flow of the game
	ProfessorOak professor("Professor Oak");
	Player player("Ash", charmander);

	// Greet the player and offer Pokemon choices 
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Explain the main quest
	professor.explainMainQuest(player);

	// Start the main game loop
	gameLoop(player);

	cout << "file included" << endl;





	return 0;

}
