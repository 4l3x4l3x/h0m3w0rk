
//Задание 2. Пользователь вводит с клавиатуры диаметр
//окружности.Посчитать площадь и периметр окружности
// периметр круга равен произведению радиуса на два пи
//S = d-квадрат : 4 * π, где d — это диаметр.  p = ((d*d)/4)*3.14 	p = d * d;
// вопросы: можно ли здесь сделать int main, когда output float?

#include <iostream>
using namespace std;

void main()
{
	float d;
	cout << "vvedite diamter okruzhnosti: ";
	cin >> d;
	if (d >= 0) {

		cout << "perimetr okruzhnosti = " << d*3.1415926535;
		cout << "\nploshad okruzhnosti = " << d * d / 4 * 3.1415926535;
	}

	else {
		cout << "oshibka, vvedite polozhitelnoe chislo";
	}

}

