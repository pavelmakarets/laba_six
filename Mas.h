#pragma once
#include <iostream>
using namespace std;
class Mas
{
public:
	Mas(int,int);
	void show();
	/*friend Mas operator * (Mas a, Mas b)
	{
		int max = a.n > b.n ? a.n : b.n;
		Mas big = a.n > b.n ? a : b;
		Mas small = a.n > b.n ? b : a;
		Mas* temp = new Mas(max ,0);
		for (int i = 0; i < small.n; i++)
		{
			temp.a[i] = small.a[i] * big.a[i];
		}
		for (int i = small.n; i < big.n; i++)
		{
			temp.a[i] = big.a[i];
		}
		return temp;
	}*/
	~Mas();
private:
	int* a;
	int n;
};

