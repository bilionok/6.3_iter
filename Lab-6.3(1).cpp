// Lab_06_3.cpp
// < Біліонок Ярослав >
// Лабораторна робота № 6.3(1)
// Опрацювання одновимірних масивів ітераційним способoм
// Варіант 1

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High);
void Print(int* a, const int size);                                   // Оголошуємо прототипи функцій
int Sum(int* a, const int size);

//2) використовувати шаблони функцій для реалізації універсального алгоритму.

template <typename I> // Шаблон
void Create2(I* a, const I size, const I Low, const  I High) // Функція, що формує масив
{
	for (I i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}
template <typename I>
void Print2(I* a, const I size)  // Функція, яка вивиодить масив на екран
{
	cout << "Array =";
	for (I i = 0; i < size; i++)
	{
		cout << setw(4) << a[i] << ",";
	}
	cout << endl;
}
template <class I>
I Sum2(I* a, const I size) // Функція, яка обчислює суму квадратів елементів масиву чисел.
{
	I S = 0;
	for (I i = 0; i < size; i++)
	{
		S += pow(a[i], 2);
	}

	return S;
}

int main()
{
	srand((unsigned)time(NULL));


	int Low, High, n;

	cout << "Array size ="; cin >> n;

	int* a = new int[n];


	cout << "Low ="; cin >> Low;
	cout << "High ="; cin >> High;
	cout << endl;

	//1) за допомогою звичайних функцій;
	Create(a, n, Low, High);
	Print(a, n);
	cout << endl;
	int S = Sum(a, n);
	cout << "Sum = "  << S << endl;
	cout << endl;
	cout <<"-------------------------------------------------------------"<< endl;

	//2) використовувати шаблони функцій для реалізації універсального алгоритму.
	Create2(a, n, Low, High);
	Print2(a, n);
	cout << endl;
	int S2 = Sum2(a, n);
	cout << "Sum = " << S2 << endl;

	
	return 0;
}
//1) за допомогою звичайних функцій;
void Create(int* a, const int size, const int Low, const  int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}

void Print(int* a, const int size)
{
	cout << "Array =";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << a[i] << ",";
	}
	cout << endl;
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		S += pow(a[i], 2);
	}

	return S;


}