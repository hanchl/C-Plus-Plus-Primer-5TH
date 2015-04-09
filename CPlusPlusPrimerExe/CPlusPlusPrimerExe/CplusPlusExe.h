//hcl 2015年3月29日22:18:27
//预包含所需头文件
#pragma once;
#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
#include<algorithm>
using namespace std;

void Ex5_20();  //C++ primer 5.20练习题
void Exe5_21(); //5.21


int Exe6_27(initializer_list<int> il);//6.27练习题
bool Exe6_30(const string &str1, const string str2);
//Exe6_31  it's vaild to return a reference that the returned reference  is used vaild(used as a lvalue or rvalue);If return a const refernce it's vaild to be used as an rvalue.
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
//Exe6_39
//Exe6_40 (a) right;(b) wrong :If a parameter has a default arguments, all the parameters that follow it must have default arguments.
//Exe6_41 (a) illegal: The first parameter don't have a default argument.（b) legal. (c) legal but don't match the programmer's intent.'*' will be converted to int .
//Exe6_42 I don't understand ...
//Exe6_43 (a) inline in a source file ;(b) int a header file so as it can be found in every source file.
//Exe6_44
inline bool isShorter(const string &s1, const string &s2) { return s1.size < s2.size; }


//Exe6_45 Exe6_46 pass..
//Exe6_46