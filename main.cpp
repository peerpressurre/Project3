#include <iostream>

int main()
{
	float r;
	std::cout << "r->";
	std::cin >> r;
	r = r * r * r;
	float n;
	n = 1.33;
	float p;
	p = 3.14;

	float volume = n * p * r;

	std::cout << "Ball volume:" << volume << " cm3";

	return 0;

}