#include "CplusPlusExe.h"

//Exe6_51
void f()
{
	cout << " f with null parameters\n";
}

void f(int ival)
{
	cout << "f with one int parameter:" << ival << endl;
}

void f(int ival1, int ival2)
{
	cout << "f with two int parameters :" << ival1 << "  " << ival2 << endl;
}

void f(double dval1, double dval2 = 3.14)
{
	cout << "f with two double parameters :" << dval1 << "   " << dval2 << endl;
}

//test for recusion loop
int recloop(int val)
{
	if (val > 1)
		return recloop(val - 1) * val;
	return 1;
};

// int array[10];

// int( &func() ) [10]
// {
// 	return  array;
// }



int main()
{
	//cout << Exe6_27({1});
	//Exe5_21();

	/*vector<int> v = { 1, 2, 3, 4, 5 };
	Exe6_33(v);*/
	// f(2.56, 3.14);

	// Exe8_4();
	list<deque<int>> val;
	// val.push_back(12);
	// cout<<a<<endl;
	array<int, 12>  aal;

	
#ifdef __WINDOWS_

	system(" pause ");

#endif

	return 0;
}