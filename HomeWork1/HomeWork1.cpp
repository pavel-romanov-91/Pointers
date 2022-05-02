#include<iostream>
using namespace std;

#define tab "\t"

void Fillrand(int arr[], const int n);
void Print(int* arr, const int n);
void Substitution(int *&arr, int &n, const int value);

void main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "¬ведите размер массива: "; cin >> n;
    int* arr = new int[n];
   // cout << typeid(arr).name() << endl;
    Fillrand(arr, n);
    Print(arr, n);
    cout << endl;
    int value;
    cout << "¬ведите добавл€емое значение: "; cin >> value;
    Substitution(arr, n, value);
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