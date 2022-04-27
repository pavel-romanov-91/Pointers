#include<iostream>
using namespace std;

#define tab "\t"
//#define POITERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POITERS_BASICS
	int a = 2;			// обьявление переменной
	int* pa = &a;		// обьявления указателя
	cout << a << endl;  // вывод значения переменной а на экран
	cout << &a << endl; // взятия адреса переменной а прямо при выводе
	cout << pa << endl; // вывод на экран адреса переменной а, хранящего в укозателе ра
	cout << *pa << endl;//Dereference operator (оператор разыменования)

	int* pb;
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
#endif // POITERS_BASICS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
		//cout << *(arr + i) << "\t";
	}
	cout << endl;
	for (int* p_arr = arr; *p_arr != 0xCCCCCCCC; p_arr++)
	{
		cout << *p_arr << "\t";
	}
	cout << endl;
}