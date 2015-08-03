#include<iostream>
#include<string>

using namespace std;

void exe5_21()
{
	string  s1, s2;
	while ( cin >> s1 && !s1.empty() )
	{
		if (s1[0] < 'A' || s1[0] > 'Z')
			continue;
		if ( s2 == s1 )
		{
			cout << s1;
			break;
		}
		s2 = s1;
	}
}