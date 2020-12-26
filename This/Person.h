#pragma once
#include <iostream>
#include <sstream>

class Person
{
private:
	std::string name;
	int age;

public:
	Person();
	Person(std::string name, int age);

	std::string toString();
};

