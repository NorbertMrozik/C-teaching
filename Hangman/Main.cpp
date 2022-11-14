#include <iostream>

const int numberOfGuesses = 6;
const int numberOfLetters = 7;
char word[numberOfLetters] = { 'h', 'a', 'n', 'g', 'm', 'a', 'n' };
char currentWord[numberOfLetters] = { '_', '_', '_', '_', '_', '_', '_' };

void drawHangman(int option)
{
	switch (option)
	{
	case 1:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	case 2:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "   |   |" << std::endl;
		std::cout << "   O   |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	case 3:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "   |   |" << std::endl;
		std::cout << "   O   |" << std::endl;
		std::cout << "  /|   |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	case 4:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "   |   |" << std::endl;
		std::cout << "   O   |" << std::endl;
		std::cout << "  /|\\  |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	case 5:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "   |   |" << std::endl;
		std::cout << "   O   |" << std::endl;
		std::cout << "  /|\\  |" << std::endl;
		std::cout << "  /    |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	case 6:
		std::cout << "========" << std::endl;
		std::cout << "   +---+" << std::endl;
		std::cout << "   |   |" << std::endl;
		std::cout << "   O   |" << std::endl;
		std::cout << "  /|\\  |" << std::endl;
		std::cout << "  / \\  |" << std::endl;
		std::cout << "       |" << std::endl;
		std::cout << " ========" << std::endl;
		std::cout << std::endl;
		break;
	}

}

void main()
{
	int currentGuess = 0;
	char userInput = 0;
	int correctGuesses = 0;
	int lettersGuessed = 0;
	
	while (currentGuess < numberOfGuesses)
	{
		// Draw word
		for (int letter = 0; letter < numberOfLetters; letter++)
		{
			std::cout << currentWord[letter];
			if (letter == 6)
			{
				std::cout << std::endl;
			}
		}
		std::cout << std::endl;

		// Get user input and check for letters
		std::cout << "Please enter a letter: ";
		std::cin >> userInput;
		for (int i = 0; i < numberOfLetters; i++)
		{
			// For each letter check if matches with user input
			if (userInput == word[i])
			{
				// Replace array of underscores with actual letters
				currentWord[i] = word[i];
				correctGuesses++;
				lettersGuessed++;
				if (lettersGuessed == numberOfLetters)
				{
					system("cls");
					std::cout << "You win!" << std::endl;
					return;
				}
			}
		}
		// If player has guessed 0 correct letters
		if (correctGuesses == 0)
		{
			system("cls");
			currentGuess++;
			drawHangman(currentGuess);
		}
		// Reset correct letters check
		else 
		{
			correctGuesses = 0;
		}

	}

	// Once player runs out of guesses
	std::cout << "Game Over!" << std::endl;
	std::cout << std::endl;

	system("pause");
}