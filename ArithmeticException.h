#pragma once
#include <iostream>
using namespace std;

class ArithmeticException : public exception
{
public:
	void get_code()
	{
		cout <<"ArithmeticException!!!������ �� 0 ������!!!"<< endl;
	}
};