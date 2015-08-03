#include<iostream>
#include<string>
#include<../Sales_data.h>

using namespace std;

void func(string infileName, string outfielName)
{
	ifstream infile(infileName);
	ofstream outfile(outfielName, ostream::app);

	if (!infile.is_open())
	{
		cerr << "error in open file: " << infileName;
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
				print(outfile, total) << endl;
				total = trans;
			}
		}
		print(outfile, total) << endl;
	}
	else
	{
		cerr << "no data?" << endl;
	}
}
