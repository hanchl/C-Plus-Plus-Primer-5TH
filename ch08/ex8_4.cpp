#include<iostream>
#include<vector>
#include<string>

using namespace std;

void exe8_4()
{
	ifstream infile("../CMakeLists.txt");
	if (!infile.is_open())
	{
		cerr << "could not open CMakeLists.txt";
		exit(1);
	}
	else
	{
		vector<string> CMakeLists;
		string line;
		while (getline(infile, line))
		{
			CMakeLists.push_back(line);
		}
		for (const auto &i : CMakeLists)
		{
			cout << i << endl;
		}
	}
}