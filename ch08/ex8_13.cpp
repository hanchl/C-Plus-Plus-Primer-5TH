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

	string line, word;
	vector<PersonInfo> people;
	istringstream record;	
	while (getline(openfile, line))
	{
		record.clear();
		record.str(line);
		PersonInfo person;
		record >> person.name;
		while (record >> word)
		{
			person.phones.push_back(word);
		}
		people.push_back(person);
	}

	for (const auto &person : people)
	{
		cout << person.name << "   ";
		for (const auto &phone : person.phones)
		{
			cout << phone << "   ";
		}
		cout << endl;
	}
}

