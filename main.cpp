#include <iostream>

int main()
{
	float lenghth;
	std::cout << "lenghth->";
	std::cin >> lenghth;
	float widhth;
	std::cout << "widhth->";
	std::cin >> widhth;
	float height;
	std::cout << "height->";
	std::cin >> height;
	double volume;
	volume = lenghth * widhth * height;

	std::cout << "Volume:" << volume << "cm3";

	return 0;
}