//hcl 2015��3��29��22:18:27
//Ԥ��������ͷ�ļ�
#pragma once;
#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
#include<algorithm>
using namespace std;

void Ex5_20();  //C++ primer 5.20��ϰ��
void Exe5_21(); //5.21


int Exe6_27(initializer_list<int> il);//6.27��ϰ��
bool Exe6_30(const string &str1, const string str2);
//Exe6_31  it's vsild to return a reference that the returned reference  is used vaild(used as a lvalue or rvalue);If return a const refernce it's vaild to be used as an rvalue.
int &Exe6_32(int *array, int index);
void Exe6_33(vector<int> v);
//Exe6_34 the answer will  be 0;
//Exe6_35 to aviod change the value;the value of val-- is val,if we do so,there will be recursion loop.
//Exe6_36 int (&foo(int i)) [10]
/* Exe6_37  
	type alias:
typedef int array[10];
using array = int[10];
array& foo();
  trailing rturn 
auto foo()->int(&)[10];
  decltype:
int array[10];
decltype(array) &foo(); */
auto Exe6_38(int i)->int(&)[5];
