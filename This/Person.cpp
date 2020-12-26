#include "Person.h"

Person::Person() {
	age = 0;
	name = "";

}

Person::Person(std::string name, int age) {
	this->name = name;
	this->age = age;
}

std::string Person::toString() {
	std::stringstream ss;

	ss << "name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();

}