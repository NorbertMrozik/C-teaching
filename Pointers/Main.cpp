#include <iostream>
#include <string>

struct Player
{
	int age = 0;
	float health = 100;
	std::string name;
};

struct Enemy
{
	int health = 100;
	int attack = 10;
	std::string name;
};

const int maxEnemies = 5;

void main()
{

	// Instantiate an array of enemy objects using the Enemy data type
	Enemy enemy[maxEnemies];

	// Loop through the array of enemies and use a pointer variable to access the data
	for (int i = 0; i < maxEnemies; i++)
	{
		Enemy* enemyPtr = &enemy[i];
		std::cout << "Enter enemy number " << (i + 1) << " name:";
		std::cin >> enemyPtr->name;
	}

	std::cout << std::endl;
	// Display the data on screen

	for (int i = 0; i < maxEnemies; i++)
	{
		std::cout << enemy[i].name << std::endl;
		std::cout << std::endl;
		std::cout << "Health: " << enemy[i].health << std::endl;
		std::cout << "Attack: " << enemy[i].attack << std::endl;
		std::cout << std::endl;
	}

	// Structs Introduction
	/*
	// Instantiate a player object using the Player data type
	Player player;

	player.age = 21;
	player.health = 100;
	player.name = "Norbert";

	Player* playerPtr = &player;

	playerPtr->age = 45;
	playerPtr->health = 25;
	playerPtr->name = "John";

	std::cout << "The player's name is " << player.name << std::endl;
	std::cout << "The player's age is " << player.age << std::endl;
	std::cout << "The player's health is " << player.health << std::endl;
	*/
	// Pointers Introduction
	/* 
	int number = 100;
	int* numberPtr = nullptr; // * - declare a pointer to a type

	numberPtr = &number; // & - Address of variable

	std::cout << number << std::endl;

	// De-reference a pointer to GET the variable's value that it points to
	std::cout << *numberPtr << std::endl;

	// De-reference a pointer to SET the variable's value that it points to
	*numberPtr = 200;


	std::cout << "The number is now " << number << std::endl;

	*/

	system("pause");
}