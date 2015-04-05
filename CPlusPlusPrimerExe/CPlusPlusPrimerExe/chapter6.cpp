#include"CplusPlusExe.h"

int Exe6_27(initializer_list<int> il)  //6.27 ·µ»Øinitializer_list<int> µÄºÍ
{
	if (il.size() <= 0)
		exit(1);
	int sum = 0;
	for (const auto &i : il)
		sum += i;
	return sum;
};
//Exe6_28 the type of elem :const string &;
//Exe_6_29 use an reference can reduce the cost of memory

bool Exe6_30(const string &str1, const string &str2)
{
	if (str1.size() == str2.size())
	{
		return str1 == str2;
	}
	auto size = str1.size() < str2.size() ? str1.size() : str2.size(); {
		for (decltype(size) i = 0; i != size; ++i)
			if (str1[i] != str2[i])
				return   false;  
	}
	return false;
}



int &Exe6_32(int *array, int index)
{
	return array[index];
}

void Exe6_33(vector<int> v)
{
	if (v.size() == 0)
		return;
	cout << v.back() << endl;
	v.pop_back();
	Exe6_33(v);
}