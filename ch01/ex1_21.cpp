#include <iostream>
#include "../include/Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		cout << item1 + item2 <<endl;
		
		return 0;
	}
	else
	{
		std::cerr << "The isbn must be equal!";

		return -1;
	}
}