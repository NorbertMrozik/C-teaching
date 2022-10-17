#include <iostream>

int userInput = 0;
const int maxItems = 5;

int oddCount = 0;
int evenCount = 0;

bool isOddFull = false;
bool isEvenFull = false;

int main()
{
	int numbers[maxItems] = { 1, 2, 3, 4, 5 };
	int oddNumbers[maxItems] = { 0 };
	int evenNumbers[maxItems] = { 0 };



	while (!isEvenFull && !isOddFull)
	{
		int evenCheck = 0;
		std::cout << "Type in a number: ";
		std::cin >> userInput;
		evenCheck = userInput % 2;
		if (evenCheck == 0)
		{
			std::cout << "Number is even" << std::endl;
			evenNumbers[evenCount++] = userInput;
		}
		else
		{
			std::cout << "Number is odd" << std::endl;
			oddNumbers[oddCount++] = userInput;
		}

		if (evenCount == maxItems)
		{
			isEvenFull = true;
		}
		if (oddCount == maxItems)
		{
			isOddFull = true;
		}
	}

	std::cout << std::endl;

	int totalOddNumbers = 0;
	int totalEvenNumbers = 0;

	std::cout << "Array of Odd Numbers: " << std::endl;

	for (int i = 0; i < maxItems; i++)
	{
		std::cout << oddNumbers[i] << ", ";
		totalOddNumbers += oddNumbers[i];
	}

	std::cout << std::endl;

	std::cout << "Array of Even Numbers: " << std::endl;

	for (int i = 0; i < maxItems; i++)
	{
		std::cout << evenNumbers[i] << ", ";
		totalEvenNumbers += evenNumbers[i];
	}

	std::cout << std::endl;

	std::cout << "Total sum of Even Numbers is: " << totalEvenNumbers << std::endl;
	std::cout << "Total sum of Odd Numbers is: " << totalOddNumbers << std::endl;

	system("pause");
	return 0;
}