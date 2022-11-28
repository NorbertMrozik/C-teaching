#include <assert.h>
#include <iostream>
#include "Player.h"
#include <algorithm>

void Player::Run(int speed)
{
	std::cout << "The player runs at a speed of " << speed << "miles per hour." << std::endl;
}

void Player::Eat(std::string food)
{
	std::cout << "The player eats " << food << " and heals." << std::endl;

}

void Player::Sleep()
{
	std::cout << "The player sleeps and restores health. " << std::endl;
}

void Player::Attack(int damage)
{
	std::cout << "The player attacks dealing  " << damage << " damage" << std::endl;
}

void Player::SetHealth(float health)
{
	//assert(health > 0.0f);
	health = std::clamp(health, 0.0f, 100.0f);
	this->health = health;
	std::cout << "Player's health is now " << this->health << std::endl;
}
