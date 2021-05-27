//3. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона. 

#include <iostream>
using namespace std;

void main()
{
	int a, b, min, max, sum = 0, sum2, i = 0;

	cout << "vvedite 2 chisla: ";
	cin >> a >> b;
	if (a > b)
	{
		min = b;
		max = a;


	}
	else if (a < b)
	{
		max = b;
		min = a;


	}
	else
	{
		cout << "summa chisel:" << a;
	}

	cout << "minimalnoe chislo: " << min << endl;
	cout << "maksimalnoe chislo: " << max << endl;


	// что с глобальным и локальным пространством????


	do
	{

		sum += min;
		min++;
		cout << "min = " << min << endl;
		cout << "sum = " << sum << endl;

	} 	while (min <= max);

	cout << "summa chisel: " << sum << endl;
}