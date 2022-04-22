#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
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

}