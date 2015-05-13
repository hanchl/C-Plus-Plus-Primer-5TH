#include <fstream>
#include <sstream>
#include <string>

#include "CplusPlusExe.h"
#include "Sales_data.h"
istream&  Exe8_1(istream& in)
{
	auto old_state = in.rdstate();
	in.clear();
	
	while(!in.eof())
	{
		string buff;
		in>>buff;
		cout<<buff<<endl;  
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

void Exe8_4()
{
	ifstream infile("../CMakeLists.txt");
	if (!infile.is_open())
	{
		cerr<<"could not open CMakeLists.txt";
		exit(1);
	}
	else
	{
		vector<string> CMakeLists;
		string line;
		while(getline(infile, line))
		{
			CMakeLists.push_back(line);
		}
		for (const auto &i : CMakeLists)
		{
			cout<<i<<endl;
		}
	}
}
void Exe8_5()
{
	ifstream infile("../CMakeLists.txt");
	if (!infile.is_open())
	{
		cerr<<"could not open CMakeLists.txt";
		exit(1);
	}
	else
	{
		vector<string> CMakeLists;
		string word;
		while(infile>>word)
		{
			CMakeLists.push_back(word);
		}
		for (const auto &i : CMakeLists)
		{
			cout<<i<<endl;
		}
	}
}

void Exe8_6()
{
	Sales_data test;
}
