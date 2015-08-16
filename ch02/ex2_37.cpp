#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;	//alias int c = a;
	decltype(a = b) d = a;	//alias int &d = a;
	
	std::cout << d  << a << std::endl;
	return 0;
}
