//Определить количество дней в году, который вводит пользователь.
//В високосном году - 366 дней, тогда как в обычном 365. Високосными
//годами являются все года делящиеся нацело на 4 за исключением
//столетий, которые не делятся нацело на 400. if ( (a % 400 == 0) || (a % 4 == 0) ) {

#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "vvedite god: ";
	cin >> a;
	if (a % 400 == 0) {
		cout << "god visokosny";
	}

	else {
		if ((a % 4 == 0) && (a % 100 != 0)) {
			cout << "god visokosny";
		}
		else {
			cout << "god nevisokosny";

		}

	}

}