#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r; // alias int a = r;

	const int ci = i, &cr = ci;
	auto b = ci; //int b = ci;
	auto c = cr; //int c = cr;
	auto d = &i; //int *d = &i;
	auto e = &ci;//const int *e = &ci;

	const auto f = ci; //const int f = ci;

	auto &g = ci; //const int &g = ci; 
	//auto &h = 42; //error
	const auto &j = 42;

	return 0;
}
