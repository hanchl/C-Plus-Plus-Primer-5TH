#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_item current, trans;
	if (cin >> current)
	{
		int cnt = 1;
		while (cin >> trans)
		{
			if (current.isbn() == trans.isbn())
			{
				cnt++;
			}
			else
			{
				cout << current << " occurs " << cnt << " times .\n";
				current = trans;
				cnt = 1;
			}
		}
		cout << current << " occurs " << cnt << " times .\n";
	}
	else
	{
		std::cerr << " No data ?"<<endl;
		return -1;
	}
	return 0;
}
