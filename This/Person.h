#pragma once
#include <iostream>
#include <sstream>

class Person
{
private:
	std::string name;
	int age;

public:
	Person(): name(""), age(0) {};
	Person(std::string name, int age) : name(name), age(age) {};

	std::string toString();
};

