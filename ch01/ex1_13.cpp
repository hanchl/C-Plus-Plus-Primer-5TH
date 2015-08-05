#include <iostream>

int ex1_9()
{
	int sum = 0;
	int start = 50;
	int end = 100;

	for (int i = start; i <= end; ++i)
	{
		sum += i;
	}

	std::cout << "the sum from 50 to 100 is " << sum << std::endl;

	return 0;
}

int ex1_10()
{
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
 	}

 	return 0;
}

int ex1_11()
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

	for (int i = min; i <= max; ++i)
	{
		std::cout << i << std::endl;
	}

	return 0;
}

int main()
{
	return ex1_11();
}
