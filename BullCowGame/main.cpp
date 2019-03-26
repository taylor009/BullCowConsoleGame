#include <iostream>
#include <string>

using namespace std;


void PrintIntro();
string GetGuessAndPrintBack();


// the entry point for the applicaiton
int main() {

	PrintIntro();

	// loop for the number of turns asking for guesses 
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}

	return 0;
}

// introduce the game
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}


string GetGuessAndPrintBack() 
{	
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//print the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}