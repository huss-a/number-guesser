#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

int main()
{

	int numToGuess, guessedNum, generatedRandomNumber;
	string result;
	bool gameLoop = true;

	while (gameLoop) {
		char playAgain;
		srand(time(NULL));
		cout << "Number to guess: \n";
		cin >> numToGuess;
	
		system("CLS");

		generatedRandomNumber = int( ( rand() % 100 + 1 ) / 10 );

		cout << "Hint: The number is between " << numToGuess - generatedRandomNumber << " and " 
			<< (10 - generatedRandomNumber) + numToGuess << "\n";

		cout << "Your guess: ";
		cin >> guessedNum;

		result = (guessedNum == numToGuess) ? "You won!" : "You lost!";

		cout << result << "\n";

		cout << "Play again? (y/n) ";
		cin >> playAgain;
		
		if (tolower(playAgain) == 'n') gameLoop = false;
		else system("CLS");
	}
}
