// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

// Function to clear the console
void clearConsole() {
	// Platform-specific clear console command
#ifdef _WIN32
	system("cls");
#else
	(void)system("clear");
#endif
}


// Function to wait for user to press Enter
void waitForEnter() {
	cin.get();    // Wait for Enter key
}// cin.get() ---> is function will temporarly pause the program till Press Enter Key

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
	Electric,
	Normal // Added for the default constructor
};

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

class Player {
  public:
		//attributies
		string name;
		Pokemon chosenPokemon;

		// Default constructor
		Player() {
			name = "Trainer";
			chosenPokemon = Pokemon(); // Using the default Pokemon constructor
			
		}
		// Parameterized constructor
		Player(std::string p_name, Pokemon p_chosenPokemon) {
			name = p_name;
			chosenPokemon = p_chosenPokemon;
			
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
			waitForEnter();// Wait for user to press Enter before proceeding
			
		}


};
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
	  waitForEnter();

	  cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
	  waitForEnter();

	  cout << name << ": But enough about me. Let's talk about you!"<< endl;
	  waitForEnter();
  }

  // Method to ask the player to choose a Pokemon
  void offerPokemonChoices(Player& player) {

	  cout << name << ": First, tell me, what’s your name?"<< endl;

	  getline(cin, player.name);
	  cout << name << ": Ah, " << player.name << "! What a fantastic name!"<< endl;
	  waitForEnter();

	  cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
	  waitForEnter();

	  // Presenting Pokemon choices 
	  cout << name << " : I have three Pokemon here with me. They’re all quite feisty!" <<endl;
	  waitForEnter();
	  cout << name << " : Choose wisley...\n";std::cout << "1.Charmander - The fire type. A real hothead!" << endl;
	  cout << "2. Bulbasaur - The grass type. Calm and collected!"<< endl;
	  cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

      int choice;
	  cout << name << ": So, which one will it be? Enter the number of your choice: ";
	  cin >> choice;
	  player.choosePokemon(choice);
	  waitForEnter();
    
  }

  void explainMainQuest(Player& player) {

	  // Clear the console
	  clearConsole();


	  cout << "Professor Oak: Oak-ay " << player.name << "!,I am about to explain you about your upcoming grand adventure." << endl;
	  waitForEnter();

	  cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!" << endl;
	  waitForEnter();

	  cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
	  waitForEnter();

	  cout << "\n" << player.name << ":Wait... that sounds a lot  like every other Pokémon game out there..." << endl;
	  waitForEnter();

	  cout << "Professor Oak: Shhh! Don't break the fourth wall,"<<player.name<<"!,This is serious business!"<<endl;
	  waitForEnter();

	  cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
	  waitForEnter();

	  cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<< endl;
	  waitForEnter();


	  cout << "\n" << player.name << ": Sounds like a walk in the park... right?"<<endl;
	  waitForEnter();

	  cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
	  waitForEnter();

	  cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
	  waitForEnter();

	  cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!"<<endl;
	  waitForEnter();

	  cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins..."<<endl;
	  waitForEnter();

	  cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
	  waitForEnter();


  }


};

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


	// Placeholder for where the game loop will start
	cout << "\n[Placeholder for the Game Loop]\n";



	return 0;
}
