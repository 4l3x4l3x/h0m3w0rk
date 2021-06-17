
/*33.1 Дан массив целых чисел. Воспользовавшись указателями *,
поменяйте местами элементы массива с четными и нечетными индексами
(т.е. те элементы массива, которые стоят на четных местах,
поменяйте с элементами, которые стоят на нечетных местах). */

#include <iostream>
using namespace std;

void main()
{

	int arr[] = { 1,2,3,4,5,6 };
	int n = sizeof(arr) / 4;
	int* pa;
	int* pb;
	int* d_arr = new int[n];


	for (int i = 0; i < n; i = i + 2)
	{
		pa = &arr[i + 1];
		pb = &arr[i];
		d_arr[i] = *pa;
		d_arr[i + 1] = *pb;

		cout << " d_arr[i] = " << d_arr[i] << " i = " << i << endl;
		cout << " d_arr[i+1] = " << d_arr[i + 1] << " i = " << i << endl;

	}

}
