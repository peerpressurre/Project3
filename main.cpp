#include <iostream>
using namespace std;

int main()
{
	std::cout << "Enter year->";
	int year;
	std::cin >> year;
	
	cout << "Days = " << 365+int(year % 4 ==0 || year % 100 == 0 || year % 400 == 0) << endl;
	
	


	return 0;
}