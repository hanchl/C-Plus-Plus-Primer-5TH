#include"CplusPlusExe.h"
//main()函数，只做调用

//test for recusion loop 
int recloop(int val)
{
	if (val > 1)
		return recloop(val-1)*val;
	return 1;
};   

int array[10];

int(&func()) [10]
{
	return  array;
}
int main()
{
	//cout << Exe6_27({1});
	//Exe5_21();
	
	/*vector<int> v = { 1, 2, 3, 4, 5 };
	Exe6_33(v);*/
	int (&r)[10] = array;
	int (&ar)[10] = func();
	cout<<ar[1];
	system("pause");

}