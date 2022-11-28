#pragma once
#include <string>

class Player
{
private:

	// State
	int age = 0;
	float health = 100.0f;
	std::string name;

public:

	//Behaviour
	void Run(int speed);
	void Eat(std::string food);
	void Sleep();
	void Attack(int damage);
	void SetHealth(float health);

};

