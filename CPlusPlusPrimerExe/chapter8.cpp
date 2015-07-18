#include "CplusPlusExe.h"
#include "Sales_data.h"

istream&  Exe8_1(istream& in)
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

void Exe8_4()
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
void Exe8_5()
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

void Exe8_6(string fileName)
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

void Exe8_7(string infileName, string outfielName)

{
	ifstream infile(infileName);
	ofstream outfile(outfielName);

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

void Exe8_8(string infileName, string outfielName)

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

void Exe8_9(istringstream& in)
{
	Exe8_1(in);
}

void Exe8_10(string infileName)
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

void Exe8_11(string infileName)
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

void Exe8_13(string infileName)
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

