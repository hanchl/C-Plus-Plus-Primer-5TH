//Exe6_28 the type of elem :const string &;
//Exe_6_29 use an reference can reduce the cost of memory
#include<vector>

void exe6_33(vector<int> v)
{
	if (v.size() == 0)
		return;
	cout << v.back() << endl;
	v.pop_back();
	exe6_33(v);
}

