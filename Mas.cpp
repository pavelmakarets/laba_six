#include "Mas.h"


Mas::Mas(int n)
{
	this->n = n;
	this->a = new int[n];
	cout << "������� ������ : ";
	while (n > 0)
	{
		cin >> a[n];
		n--;
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
