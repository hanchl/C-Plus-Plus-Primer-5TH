#include <iostream>

int main()
{
	int i = 10, i2 = 20;
	int *pi = &i;

	pi = &i2;
	std::cout << *pi << std::endl;

	*pi =30;
	std::cout << *pi << std::endl;
	std::cout << i2 << std::endl;

	return 0;
}
