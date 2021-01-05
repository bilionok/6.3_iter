// Lab_06_3.cpp
// < ������� ������� >
// ����������� ������ � 6.3(1)
// ����������� ����������� ������ ����������� ������o�
// ������ 1

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High);
void Print(int* a, const int size);                                   // ��������� ��������� �������
int Sum(int* a, const int size);

//2) ��������������� ������� ������� ��� ��������� ������������� ���������.

template <typename I> // ������
void Create2(I* a, const I size, const I Low, const  I High) // �������, �� ����� �����
{
	for (I i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}
template <typename I>
void Print2(I* a, const I size)  // �������, ��� ��������� ����� �� �����
{
	cout << "Array =";
	for (I i = 0; i < size; i++)
	{
		cout << setw(4) << a[i] << ",";
	}
	cout << endl;
}
template <class I>
I Sum2(I* a, const I size) // �������, ��� �������� ���� �������� �������� ������ �����.
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

	//1) �� ��������� ��������� �������;
	Create(a, n, Low, High);
	Print(a, n);
	cout << endl;
	int S = Sum(a, n);
	cout << "Sum = "  << S << endl;
	cout << endl;
	cout <<"-------------------------------------------------------------"<< endl;

	//2) ��������������� ������� ������� ��� ��������� ������������� ���������.
	Create2(a, n, Low, High);
	Print2(a, n);
	cout << endl;
	int S2 = Sum2(a, n);
	cout << "Sum = " << S2 << endl;

	
	return 0;
}
//1) �� ��������� ��������� �������;
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