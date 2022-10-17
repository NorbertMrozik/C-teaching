#include <iostream>
#include <string>

const int dimension = 5;

void main()
{
	bool isAppRunning = true;
	char userChoice = 0;

	int selectedRow = 0;
	int selectedColumn = 0;

	char seats[dimension][dimension] =
	{
	{'A', 'A', 'A', 'A', 'A'},
	{'A', 'A', 'A', 'A', 'A'},
	{'A', 'A', 'A', 'A', 'A'},
	{'A', 'A', 'A', 'A', 'A'},
	{'A', 'A', 'A', 'A', 'A'}
	};

	std::cout << "Welcome to the Cinema:" << std::endl;
	std::cout << std::endl;

	while (isAppRunning == true)
	{

		// Display seats
		for (int row = 0; row < dimension; row++)
		{
			for (int column = 0; column < dimension; column++)
			{
				if (column != (dimension - 1))
				{
					std::cout << "|  " << seats[row][column] << "  ";
				}
				else if (column == (dimension - 1))
				{
					std::cout << "|  " << seats[row][column] << "  |" << std::endl;
				}
			}
		}
		// Rows
		std::cout << std::endl;
		std::cout << "Select a row [1-5] or type e/E to exit: " << std::endl;
		std::cin >> userChoice;

		//Check if user wants to exit
		if (userChoice == 'e' || userChoice == 'E')
		{
			isAppRunning = false;
			system("cls");
			std::cout << "Goodbye!" << std::endl;
			//break;
		}

		else
		{
			// Convert char to int
			selectedRow = (userChoice - '0') - 1;
			system("cls");

			if (selectedRow >= 0 && selectedRow <= dimension)
			{
				// Display row
				std::cout << "Selected row is: " << (userChoice - '0') << std::endl;
			}
			else
			{
				// If input is not from 1 to 5
				std::cout << "ERROR: Row not found/Unknown Input" << std::endl;
				break;
			}

			// Columns
			std::cout << "Select a column [1-5]: " << std::endl;
			std::cin >> userChoice;

			// Convert char to int
			selectedColumn = (userChoice - '0') - 1;
			system("cls");

			if (selectedColumn >= 0 && selectedColumn <= dimension)
			{
				// Display column
				std::cout << "Selected column is: " << (userChoice - '0') << std::endl;
			}
			else
			{
				// If input is not from 1 to 5
				std::cout << "ERROR: Column not found/Unknown Input" << std::endl;
				break;
			}
			std::cout << "Selected column is: " << (userChoice - '0') << std::endl;

			system("cls");
			// Check if reserved
			if (seats[selectedRow][selectedColumn] == 'A')
			{
				//Mark as reservered and display selected seat
				seats[selectedRow][selectedColumn] = 'R';
				std::cout << "Seat number: { Row: " << (selectedRow + 1) << ", Column: " << (selectedColumn + 1) << "} has been reserved." << std::endl;
				std::cout << std::endl;
			}
			else
			{
				// If already reservered
				std::cout << "ERROR: Seat already reserved." << std::endl;
			}
		}
	}

	// Clean up
	std::cout << std::endl;
	system("pause");
}