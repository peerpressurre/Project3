#include <iostream>

int main()
{
	std::cout << "Enter year->";
	int year;
	std::cin >> year;
	std::cout << int(((year % 10) % 4) / 2) + 365;
	return 0;
}