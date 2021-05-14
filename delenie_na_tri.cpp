// Определить, кратно ли заданное число трем; если нет, вывести остаток.

#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "vvedite chislo: ";
	cin >> a;
	if (a % 3 == 0) {

		cout << "eto chislo kratno trem";

	}
	else {
		cout << "eto chislo ne kratno trem, ostatok raven: " << a % 3;
	}

}