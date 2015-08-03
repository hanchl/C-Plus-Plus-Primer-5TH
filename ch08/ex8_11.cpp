#include<iostream>
#include<string>
#include<vector>
#include<stringstream>

using namespace std;

void func(string infileName)
{
	ifstream openfile(infileName);
	if (!openfile.is_open())
	{
		cerr << "error in open file:" << infileName << endl;
		exit(1);
	}

	vector<string> Vecfile;
	string line;
	stringstream record;
	while (getline(openfile, line))
	{
		record.clear();
		record.str(line);
		Vecfile.push_back(line);

		string word;
		while (record >> word)
		{
			cout << word << endl;
		}
	}
}