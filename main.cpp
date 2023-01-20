#include <iostream>

int main()
{
	float scale;
	std::cout << "map scale->";
	std::cin >> scale;
	float dots_distance;
	std::cout << "distance between two dots that represent points->";
	std::cin >> dots_distance;

	double distance;
	distance = scale * dots_distance;

	std::cout << "Distance between two points: " << distance << "km";

	return 0;
}