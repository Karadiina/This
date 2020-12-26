#include "Person.h"

int main()
{
	Person person1;
	Person person2("Bob", 42);

	std::cout << person1.toString() << std::endl;
	std::cout << person2.toString() << std::endl;

	return 0;
}