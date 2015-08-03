#include <iostream>

int main()
{
	int sum = 0;
	int idx = 50;

	while (idx  != 101)
	{
		sum += idx++;
	}

	std::cout << "the sum from 50 to 100 is " << sum << std::endl;

	return 0;
}