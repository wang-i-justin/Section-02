// BullCowGame Project

// # - Pre-Processor directive
#include <iostream> // use angular when you are referencing a standard library
#include <string>
// use quotation for references to files you include (examples are *.h files)

//std::cout << "Welcome to Bulls and Cows" << std::endl; // "cout" is a member of the "std" is a Namespace within the library "iostream"
using namespace std;

//These are called the function "Prototypes"
void PrintIntro();
string GetGuessAndPrintBack();

int main() {
	
	PrintIntro();

	constexpr int NUMBER_OF_TURNS = 5;

	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		GetGuessAndPrintBack();
	}
	return 0;
}

//intro to the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 10; //Constant Expression is a value that doesn't change, cannot change once the value compiles.

	cout << "Welcome to Bulls and Cows\n"; // "cout" is a member of the "std" is a Namespace within the library "iostream"
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;

	return;
}

//get a guess from the playerand print result back
string GetGuessAndPrintBack() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	cout << "Your guess was: " << Guess;
	cout << endl;
	return Guess;
}