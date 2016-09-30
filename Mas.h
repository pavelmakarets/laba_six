#pragma once
#include <iostream>
using namespace std;

template <class T>
class Mas
{
public:
	Mas(T n, int key = 1)
	{
		this->n = n;
		this->a = new T[n];
		if (key == 1)
		{
			cout << "¬ведите массив : ";
			for (int i = 0; i < n; i++)
			{
				cin >> this->a[i];
			}
		}
	}
	void show()
	{
		for (int i = 0; i < this->n; i++)
		{
			cout << this->a[i] << " ";
		}
		cout << endl;
	}
	Mas operator * (Mas x)
	{
		T max = this->n > x.n ? this->n : x.n;
		Mas big = this->n > x.n ? *this : x;
		Mas small = this->n > x.n ? x : *this;

		Mas* temp = new Mas(max,0);
		for (int i = 0; i < small.n; i++)
		{
			temp->a[i] = small.a[i] * big.a[i];
		}
		for (int i = small.n; i < big.n; i++)
		{
			temp->a[i] = big.a[i];
		}
		return *temp;
	}
	bool operator == (Mas x)
	{
		if (this->n == x.n)
		{
			for (int i = 0; i < x.n; i++)
			{
				if (this->a[i] == x.a[i]);
				else return false;
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	operator int ()
	{
		return this->n;
	}
	int operator [] (int x)
	{
		for (int i = 0; i < this->n; i++)
		{
			if (this->a[i] == x)
				return i;
		} 
		return 0;
	}
	bool operator <= (Mas x)
	{
		if (this->n <= x.n)
		{
			for (int i = 0; i < x.n; i++)
			{
				if (this->a[i] <= x.a[i]);
				else return false;
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	~Mas() = default;
private:
	T* a;
	T n;
};

