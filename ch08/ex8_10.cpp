#include<iostream>
#include<string>
#include<vector>

using namespace std;

void func(string infileName)
{
	ifstream openfile(infileName);
	if (!openfile.is_open())
	{
		cerr << " input file" << infileName << "error \n";
		exit(1);
	}

	vector<string> Vecfile;
	string line;
	while (getline(openfile, line))
	{
		Vecfile.push_back(line);
	}

	for (auto &line : Vecfile)
	{
		string word;
		istringstream record(line);
		while (record >> word)
		{
			cout << word << endl;
		}
	}
}