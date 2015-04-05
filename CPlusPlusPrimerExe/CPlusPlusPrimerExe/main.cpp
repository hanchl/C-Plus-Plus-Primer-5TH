#include"CplusPlusExe.h"
//main()函数，只做调用

//test for recusion loop 
int recloop(int val)
{
	if (val > 1)
		return recloop(val-1)*val;
	return 1;
};   
int main()
{
	//cout << Exe6_27({1});
	//Exe5_21();
	
	/*vector<int> v = { 1, 2, 3, 4, 5 };
	Exe6_33(v);*/
	//cout<<recloop(5);
	system("pause");

}