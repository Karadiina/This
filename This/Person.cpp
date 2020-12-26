#include "Person.h"


std::string Person::toString() {
	std::stringstream ss;

	ss << "name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();

}