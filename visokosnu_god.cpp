//���������� ���������� ���� � ����, ������� ������ ������������.
//� ���������� ���� - 366 ����, ����� ��� � ������� 365. �����������
//������ �������� ��� ���� ��������� ������ �� 4 �� �����������
//��������, ������� �� ������� ������ �� 400. if ( (a % 400 == 0) || (a % 4 == 0) ) {

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