#include<string>
#invlude<iostream>

using namespace std;

void ex5_20()
{
	string s1, s2;
	int cnt = 0;

	while ( cin >> s2 && !s2.empty() )
	{
		if (s1 == s2)
		{
			cout << s1;
			++cnt;
			break;
		}
		s1 = s2;
	}
};