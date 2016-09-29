#include "Mas.h"


Mas::Mas(int n)
{
	this->n = n;
	this->a = new int[n];
	cout << "¬ведите массив : ";
	for (int i = 0; i < n; i++)
	{
		cin >> this->a[i];
	}
}

void Mas::show()
{
	for (int i = 0; i < this->n; i++)
	{
		cout << this->a[i] << " ";
	}
	cout << endl;
}

Mas::~Mas()
{
}
