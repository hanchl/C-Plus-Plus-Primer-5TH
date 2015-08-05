#include <iostream>

int main()
{
	int min = 0, max = 0;

	std::cout << "Enter 2 integers:" << std::endl;
	std::cin >> min >> max;

	if ( min > max)
		{
			int tmp = min;
			min = max;
			max = tmp;
		}

	int i = min;
	while ( i <= max)
		std::cout << i++ << std::endl;

	return 0;

}
