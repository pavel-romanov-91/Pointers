#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	cout << "Исходный массив: ";
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		*(arr+i) = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Массив even: " << tab;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Массив odd:" << tab;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0) cout << arr[i] << tab;
	}
	cout << endl;
}