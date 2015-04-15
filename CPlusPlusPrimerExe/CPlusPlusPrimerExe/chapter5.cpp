#include"CplusPlusExe.h"

void Ex5_20()
{
	string s1, s2;
	int cnt = 0;

	while ( cin >> s2&&!s2.empty() )
	{
		if (s1 == s2)
		{
			cout << s1;
			++cnt;
			break;
		}
		s1 = s2;
	}

};  //C++ primer 5.20Á·Ï°Ìâ

void Exe5_21()
{
	string  s1, s2;
	while ( cin>>s1 && !s1.empty() )
	{
		if (s1[0]<'A' || s1[0]>'Z')
			continue;
		if ( s2 == s1 )
		{
			cout << s1;
			break;
		}
		s2 = s1;
	}
}//C++ primer 5.21Á·Ï°Ìâ
inline int get_size(){ return 0; }
void Exe5_22()
{	
	int sz = get_size();
	while (sz <= 0)
	{
		sz = get_size();
	}
}