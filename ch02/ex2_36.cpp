#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;	//alias int a = c;
	decltype((b)) d = a;	//alias int &d = a;
	++c;
	++d;
	//a = 4; b = 4; c = 4; d = 4;
	std::cout << " a :" << a << std::endl 
			  << " b :" << b << std::endl
			  << " c :" << c << std::endl
			  << " d :" << d << std::endl
			  << std::endl;

	return 0;
}
