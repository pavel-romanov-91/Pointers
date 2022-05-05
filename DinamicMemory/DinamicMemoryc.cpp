#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//#define TASK
//#define IASK_1
#define TASK_2

//#define DYNAMIC_MEMORI_1
#define DYNAMIC_MEMORI_2

void Fillrand(int arr[], const int n);
void Fillrand(int** arr, const int rows, const int cols);

void Print(int* arr, const int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int arr[], int& n, int value);


void main()
{
	setlocale(LC_ALL, ""); 

#ifdef DYNAMIC_MEMORI_1

#ifdef TASK
		int n;
	cout << "Введите размер массива: "; cin >> n;
	//cout << "Исходный массив: ";
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
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
	//Fillrand(arr, n);
	//Print(arr, n);
	cout << endl;
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	//Print(arr, n);
	delete[] arr;

	//arr[n] = value;
	//n++;
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
#endif // DYNAMIC_MEMORI_1
#ifdef DYNAMIC_MEMORI_2
	int rows;
	int cols;
	cout << "Введите количество строк: ";				cin >> rows;
	cout << "Введите количество элементов строки: ";    cin >> cols;
	//создаем массив укозателей
	int** arr = new int* [rows];
	//создаем строки двумерного массива
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	//обращение к элементам двумерного динамического массива
	Fillrand(arr, rows, cols);
	Print(arr, rows, cols);
	//удаление массива
	//удаление строки
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	// удаление массива укозателей
	delete[]arr;

#endif // DYNAMIC_MEMORI_2


}

void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}

}
void Fillrand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int* push_back(int arr[], int& n, int value)
{
	//Создаем буферный массив нужного размера.
	int* buffer = new int[n + 1];
	//Копируем все данные из исходного массива в буферный масив
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//После того, как данные скопированы в новый массивб старый удалем
	delete[]arr;
	//Подменяем адрес старого массива адресом нового массива
	arr = buffer;
	//Только после всего этого в новый элемент можно добавить значение
	arr[n] = value;
	//После добавления элемента в массив, количества его элементов
	n++;
	return arr;


}