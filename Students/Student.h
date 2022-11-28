#include <string>
#pragma once

class Student
{
	int age = 0;
	std::string name;

public:
	void GetAge(int age);
	void Study(std::string subject);
};

