#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;	//alias int j = i;
	const auto &k = i;	//alias const int &k = i;
	auto  *p = &i;	//alias const int *p = &i;
	const auto j2 = i, &k2 = i;	//alias const int j2 = i, const int &k2 = i;	

	return 0;
}
