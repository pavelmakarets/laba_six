#pragma once
#include "ArithmeticException.h"
class Integer
{
public:
	Integer(int x)
	{
		this->x = x;
	}
	Integer operator / (Integer a)
	{
		if (a.x == 0)
		{
			throw new ArithmeticException();
		}
		else
		{
			return (this->x / a.x);
		}
	}
	~Integer() = default;
private:
	int x;
};

