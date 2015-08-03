#include<initializer_list>
int exe6_27(initializer_list<int> il)  
{
	if (il.size() <= 0)
		exit(1);
	int sum = 0;
	for (const auto &i : il)
		sum += i;
	return sum;
};