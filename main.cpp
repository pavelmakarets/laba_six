#include "Mas.h"

int size(int);

void main()
{
	setlocale(LC_ALL,"rus");
	Mas a(5);
	//a.show();
	Mas b(2);
	//b.show();

	Mas x(0,0);
	x = a * b ;
	x.show();

	//if (a == b) cout << "������� �����." << endl;
	//else cout << "������� �� �����." << endl;

	//cout << size(a) << endl;

	//cout << a[4] << endl;

	//if (a <= b) cout << "������ a ������ ���� ����� b." << endl;

	system("pause");
}

int size(int x)
{
	return x;
}
