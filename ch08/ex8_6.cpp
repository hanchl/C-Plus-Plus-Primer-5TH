#include<iostream>
#include<string>

using namespace std;

void ex8_6(string fileName)
{
	ifstream infile(fileName);

	if (!infile.is_open())
	{
		cerr << "error in open file: " << fileName;
		exit(1);
	}

	Sales_data total;
	if (read(infile, total))
	{
		Sales_data trans;
		while (read(infile, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "no data?" << endl;
	}
}