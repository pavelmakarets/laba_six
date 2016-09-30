#include "Mas.h"


int size(int);

template <typename T>
T min(T x[], int n, T a)
{
	for (int i = 0; i < n; i++)
	{
		if (a > x[i]) return x[i];
	}
	return NULL;
}

void main()
{
	setlocale(LC_ALL,"rus");
	//Mas<int> a(5);
	////a.show();
	//Mas<int> b(5);
	////b.show();

	//Mas<int> x(0,0);
	//x = a * b ;
	//x.show();

	//********************************************************************

	//Mas<double> a(5);
	////a.show();
	//Mas<double> b(5);
	////b.show();

	//Mas<double> x(0, 0);
	//x = a * b ;
	//x.show();

	//********************************************************************

	//Mas<> a(5);
	////a.show();
	//Mas<double> b(5);
	////b.show();

	//Mas<double> x(0, 0);
	//x = a * b ;
	//x.show();

	//********************************************************************

	//if (a == b) cout << "Массивы равны." << endl;
	//else cout << "Массивы не равны." << endl;

	//cout << size(a) << endl;

	//cout << a[4] << endl;

	//if (a <= b) cout << "Массив a меньше либо равен b." << endl;


	int mas1[] = {5, 4, 3, 1, 5};
	double mas2[] = { 1.1, 2.2, 3.3, 4.6, 5.1 };

	cout << min(mas1,5,4) << endl;
	cout << min(mas2, 5, 1.2) << endl;

	system("pause");
}

int size(int x)
{
	return x;
}
