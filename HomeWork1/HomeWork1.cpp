#include<iostream>
using namespace std;

#define tab "\t"

void Fillrand(int arr[], const int n);
void Print(int* arr, const int n);
void Substitution(int *&arr, int &n, const int value);
void pop_back(int*& arr, int& n);
void Push_front(int*& arr, int& n, const int value);
void insert(int*& arr, int& n, int ind, const int value);
void Pop_front(int*& arr, int& n);
void Erase(int*& arr, int& n, int ind);

void main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите размер массива: "; cin >> n;
    int* arr = new int[n];
   // cout << typeid(arr).name() << endl;
    Fillrand(arr, n);
    Print(arr, n);
    cout << endl;

    int value;
    cout << "Введите добавляемое значение: "; cin >> value;
    Substitution(arr, n, value);
    Print(arr, n);
    cout << endl;

    cout << "Удаление последнего элемента массива: " << endl;
    pop_back(arr, n);
    Print(arr, n);
    cout << endl;

    cout << "Введите добавляемое значение: "; cin >> value;
    Push_front(arr, n, value);
    Print(arr, n);
    cout << endl;

    cout << "Удаление первого элемента массива: " << endl;
    Pop_front(arr, n);
    Print(arr, n);
    cout << endl;

    int ind;
    cout << "Введите индекс для вставки значения: "; cin >> ind;
    cout << "Введите значение: "; cin >> value;
    insert(arr, n, ind, value);
    Print(arr, n);
    cout << endl;

    cout << "Введите индекс удаленного значения: "; cin >> ind;
    Erase(arr, n, ind);
    Print(arr, n);

    delete[]arr;

}
void Fillrand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 50;
    }
}
void Print(int* arr, const int n)
{
   //  cout << typeid(arr).name() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
}
void Substitution(int*& arr, int& n, const int value)
{
    int* newnamber = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        newnamber[i] = arr[i];
    }
    newnamber[n] = value;
    n++;
    delete[]arr;
    arr = newnamber;
}
void Push_front(int*& arr, int& n, const int value)
{
    int* newnamber = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        newnamber[i + 1] = arr[i];
    }
    delete[]arr;
    arr = newnamber;
    arr[0] = value;
    n++;
}
void insert(int*& arr, int& n, int ind, const int value)
{
    int* newnamber = new int[n + 1];
    for (int i = n-1; i >= ind-1; i--)
    {
        newnamber[i+1] = arr[i];
    }
    for (int i = 0; i <= ind-1; i++)
    {
        newnamber[i] = arr[i];
    }
    delete[]arr;
    newnamber[ind] = value;
    arr = newnamber;
    n++;
    
}
void pop_back(int*& arr, int& n)
{
    //n--;
    int* newnamber = new int[--n];
    for (int i = 0; i < n; i++)
    {
        newnamber[i] = arr[i];
    }
    delete[]arr;
    arr = newnamber;
}
void Pop_front(int*& arr, int& n)
{
    int* newnamber = new int[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        newnamber[i] = arr[i + 1];
    }
    delete[]arr;
    arr = newnamber;
    n--;
}
void Erase(int*& arr, int& n, int ind)
{
    int* newnamber = new int[n - 1];
    for (int i = 0; i < ind; i++)
    {
        newnamber[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        newnamber[i] = arr[i + 1];
    }
    delete[]arr;
    arr = newnamber;
    n--;
}