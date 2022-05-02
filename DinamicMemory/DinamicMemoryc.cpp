#include<iostream>
using namespace std;

#define tab "\t"
//#define TASK
//#define IASK_1
#define TASK_2

void Fillrand(int arr[], const int n);
void Print(int* arr, const int n);

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK
	int n;
	cout << "Введите размер массива: "; cin >> n;
	//cout << "Исходный массив: ";
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

	

#endif // TASK
#ifdef TASK_1
	cout << "Массив even: " << tab;
	int* evan = new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(evan + i) = rand() % 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << evan[i] << tab;
	} 
	for (int i = 0; i < 10; i++)
	{
		if (evan[i] % 2 == 0) cout << evan[i] << tab;
	}
	cout << endl;
	cout << "Масив odd:"
		int* odd = new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(odd + i) = rand() % 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << odd[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (odd[i] % 2 != 0) cout << odd[i] << tab;
	}
	cout << endl;

#endif // TASK_1

#ifdef TASK_2
	int n;
	cout << "Введите размер массива: "; cin >> n;

	int* arr = new int[n];
	cout << typeid(arr).name() << endl;
	Fillrand(arr, n);
	Print(arr, n);
	cout << endl;
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr[n] = value;
	n++;
	Print(arr, n);
	//delete[] arr;
	/*int value;
	cout << "Введите добавляемое значение: "; cin >> n;
	arr[n] = value;
	n++;
	Print(arr, n);
	delete[] arr;*/

	/*const int SIZE = 5;
	int brr[SIZE];
	cout << typeid(brr).name() << endl;
	Fillrand(brr, SIZE);
	Print(brr, SIZE);

	delete[] arr;*/
#endif // TASK_2

}

void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	
}

void Print(int* arr, const int n)
{
	cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}