///hcl 2015-3-29 22:18:27
//

#ifndef  CPLUSPLUSEXE_H
#define  CPLUSPLUSEXE_H

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <deque>
#include <list>
#include <initializer_list>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iterator>

using namespace std;

void Ex5_20();  //C++ primer 5.20
void Exe5_21(); //5.21
void Exe5_22();

int Exe6_27(initializer_list<int> il);//6.27
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
//Exe6_41 (a) illegal: The first parameter don't have a default argument.£¨b) legal. (c) legal but don't match the programmer's intent.'*' will be converted to int .
//Exe6_42 I don't understand ...
//Exe6_43 (a) inline in a source file ;(b) int a header file so as it can be found in every source file.
//Exe6_44
//inline bool isShorter(const string &s1, const string &s2) { return s1.size < s2.size; }


//Exe6_45 Exe6_46 pass..
//Exe6_46

//Exe6_47  pass
//Exe6_48 It's wrong.When cin falls,it returns 0 and then the loop will stop  the program will be terminated.
//Exe6_49 Condidate function :functions that match the call    Viable function : function that best match the call.
//Exe6_50  (a):illegal call: no best match; (b£©£ºf(int);(c): f(int,int);(d) (double,double=3.14)
//Exe6_51   see main.cpp
//Exe6_52 (a):1;(b):1
//Exe6_53  pass
//int Exe6_54(int val1, int val2) 6_55 6_56  just pass for now;


istream&  Exe8_1(istream& in);
void Exe8_4();
void Exe8_5();
void Exe8_6(string fileName);
void Exe8_7(string infileName, string outfielName);
void Exe8_8(string infileName, string outfielName);
void Exe8_9(istringstream& in);
void Exe8_10(string infileName);
void Exe8_11(string infileName);

struct PersonInfo
{
	string name;
	vector<string> phones;
};

void Exe8_13(string infileName);
#endif