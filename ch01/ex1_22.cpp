#include <iostream>
#include "../include/Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item total;
	if(cin >> total)
	{
		Sales_item trans;
		while(cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
			}
			else
			{
				cout << total <<endl;
				total = trans;
			}
		}
		cout << total << endl;

		return 0; 
	}
	else
	{
		std::cerr << " please enter at least one Sales_item";

		return -1;
	}
}
