// ������������ ������ � ���������� �����
//� ��������, ��������� � ������ ���.������� �� �����
//������� ����� � �����, ������� � ��������.���������,
//������� �����, ����� � ������ �������� �� ��������.

#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "vvedite vremia v sekundah: ";
	cin >> a;
	int h = a / 3600;
	int m = (a / 60) - (h * 60);
	int s = a - (h * 3600) - (m * 60);
	cout << "time now: " << int(h) << " hours  " << int(m) << " minutes " << int(s) << " seconds\n";

	{a = (86400 - a);
	int h = a / 3600;
	int m = (a / 60) - (h * 60);
	int s = a - (h * 3600) - (m * 60);
	cout << "do polunochi ostalos: " << int(h) << " hours  " << int(m) << " minutes " << int(s) << " seconds\n"; }

}