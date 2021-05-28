// 10. Дано натуральное число n.Написать программу, которая вычисляет факториал неотрицательных целых чисел n(т.е.число целое и больше 0).

#include <iostream>
using namespace std;

void main()
{
	int a, f = 1, i = 1;

	cout << "vvedite chislo bolshe 0 ";
	cin >> a;

	do
	{

		f *= i;
		i++;
		cout << "facktorial = " << f << endl;
		cout << "i = " << f << endl;

	} while (i <= a);

	cout << "facktorial = " << f << endl;
}