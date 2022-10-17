#include <iostream>
#include <string>


int number1;
int number2;
int sum;

void Add()
{
	sum = number1 + number2;

	std::cout << "Sum is: " << sum << std::endl;

}

void Substract()
{
	sum = number1 - number2;

	std::cout << "Substract is: " << sum << std::endl;
}

void Multiply()
{
	sum = number1 * number2;

	std::cout << "Multiply is: " << sum << std::endl;
}

void Division()
{
	if (number1 >> 0 && number2 >> 0)
	{
		sum = number1 / number2;
		std::cout << "Division is: " << sum << std::endl;
	}
	else
		std::cout << "Error: Numbers cannot contain 0." << std::endl;
}
int main()
{
	int exit;
	int option = 0;
	std::string name;

	std::cout << "What's your name?: ";
	std::cin >> name;

	while (option != 5)
	{
		std::cout << "Hello, " << name << std::endl;
		std::cout << "Choose your program: " << std::endl;
		std::cout << "1. Add " << std::endl;
		std::cout << "2. Substract" << std::endl;
		std::cout << "3. Multiply" << std::endl;
		std::cout << "4. Divide" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << "Choose an option: ";
		std::cin >> option;

		if (option != 5)
		{
			std::cout << "Please enter a number: ";
			std::cin >> number1;

			std::cout << "Please enter a second number: ";
			std::cin >> number2;
		}

		switch (option)
		{
		case 1:
			Add();
			break;
		case 2:
			Substract();
			break;
		case 3:
			Multiply();
			break;
		case 4:
			Division();
			break;
		}
		std::cout << " " << std::endl;

	}
	system("pause");
	return 0;
}

