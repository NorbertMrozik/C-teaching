#include <iostream>
#include <string>

#include "Player.h"


/*char userInput = 0;

struct House
{
	int amountOfRooms;
	std::string houseName;
	bool isFreeHold = false;
};

const int numberOfHouses = 5;*/

int main()
{
	
	Player player;

	player.Run(7);
	player.Eat("Apple");
	player.Sleep();
	player.Attack(23);
	player.SetHealth(-20.0f);
	/*House houses[numberOfHouses];
	//Assign Data
	for (int i = 0; i < numberOfHouses; i++)
	{
		std::cout << "Enter house name: ";
		std::cin >> houses[i].houseName;
		
		std::cout << "Enter a number of rooms: ";
		std::cin >> houses[i].amountOfRooms;

		std::cout << "Is the house free-hold? ";
		std::cin >> userInput;
		if (userInput == 'Y' || userInput == 'y')
		{
			houses[i].isFreeHold = true;
		}
	}

	std::cout << std::endl;

	//Display data
	for (int i = 0; i < numberOfHouses; i++)
	{
		std::cout << "House name: " << houses[i].houseName << std::endl;
		std::cout << "Number of rooms: " << houses[i].amountOfRooms << std::endl;

		if (houses[i].isFreeHold == false)
		{
			std::cout << "Free hold: No" << std::endl;
		
		}		
		else if (houses[i].isFreeHold == true)
		{
			std::cout << "Free hold: Yes" << std::endl;
		}
		std::cout << std::endl;
	}*/

	system("pause");
	return 0;
}