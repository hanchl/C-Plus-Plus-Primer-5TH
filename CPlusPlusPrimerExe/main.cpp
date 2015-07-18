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

int func(int N)
{	
	if (N < 2)
	{
		printf("wrong N ! exit\n");
		return -1;
	}
	for (int i = 2; i != N + 1; ++i)
	{
		int j = 2;
		for (; j != i ;++j)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d \n", i);
		}
	}
	
	return 0;
}

int main()
{
	//cout << Exe6_27({1});
	//Exe5_21();

	/*vector<int> v = { 1, 2, 3, 4, 5 };
	Exe6_33(v);*/
	// f(2.56, 3.14);

	// Exe8_4();

	// val.push_back(12);
	// cout<<a<<endl;

	// Exe8_6("../Salesdata.bin");
	// Exe8_7("../Salesdata.bin", "outfile");
	// Exe8_8("../Salesdata.bin", "outfile");

	// string cin2string;
	// getline(cin, cin2string);
	// istringstream indata(cin2string);

	// Exe8_9(indata);

	ostream_iterator<int> out(cout, " ");
	vector<int> vi(10);
	
	for_each(vi.begin(), vi.end(), [&](int &i)->void{ static int cnt = 0;i = cnt++;});

	auto one = find(vi.crbegin(), vi.crend(), 5);
	for_each(vi.cbegin(), one.base(), [&](int i){*out++ = i;});
	// copy(vi.crbegin(), vi.crend(), out);
	// Exe8_13("../Salesdata.bin");
	cout << endl;
	func(20);

#ifdef __WINDOWS_
	system(" pause ");
#endif

	return 0;
}