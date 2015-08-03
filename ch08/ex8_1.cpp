#include<iostream>

using namespace std;

istream&  exe8_1(istream& in)
{
	auto old_state = in.rdstate();
	in.clear();

	while (!in.eof())
	{
		string buff;
		in >> buff;
		cout << buff << endl;
	}

	in.setstate(old_state);
///for test
	// if (in.eof())
	// {
	// 	cout<<"cin eof \n";
	// }
	// if (in.fail())
	// {
	// 	cout<<"cin fail \n";
	// }
	// if (in.bad())
	// {
	// 	cout<<"cn bad \n";
	// }

	// cout<<in.rdstate()<<endl;
	// cout<<old_state<<endl;
	// cout<<in.rdstate()<<endl;

	// in.clear(in.rdstate() | old_state);
	// cout<<in.rdstate()<<endl;

	return in;
}
