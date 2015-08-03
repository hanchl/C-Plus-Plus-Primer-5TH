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

	while ( min <= max)
		std::cout << min++ << std::endl;

	return 0;

}
