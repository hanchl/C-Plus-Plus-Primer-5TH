#include<iostream>
#include<vector>
#include<string>

using namespace std;

void exe8_5()
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
		string word;
		while (infile >> word)
		{
			CMakeLists.push_back(word);
		}
		for (const auto &i : CMakeLists)
		{
			cout << i << endl;
		}
	}
}
