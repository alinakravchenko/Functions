#include<iostream>
using namespace std;

#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Statistics.h"





void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Миниамальное значение массива: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << MaxValueIn(arr, n) << endl;

	int num;
	cout << "Введите количество сдвигов: "; cin >> num;
	ShiftLeft(arr, n, num);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> num;
	ShiftRight(arr, n, num);
	Print(arr, n);
	


	cout << delimiter << endl;
	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, m) << endl;
	cout << "Миниамальное значение массива: " << MinValueIn(brr, m) << endl;
	cout << "Максимальное значение массива: " << MaxValueIn(brr, m) << endl;
	int bum;
	cout << "Введите количество сдвигов: "; cin >>bum;
	ShiftLeft(brr, m, bum);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> bum;
	ShiftRight(brr, m, bum);
	Print(brr, m);

	cout << delimiter << endl;

	
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Миниамальное значение массива: " << MinValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << MaxValueIn(arr2, ROWS, COLS) << endl;
	int rum;
	cout << "Введите количество сдвигов: "; cin >> rum;
	ShiftLeft(arr2, ROWS,COLS, rum);
	Print(arr2, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> rum;
	ShiftRight(arr2, ROWS, COLS, rum);
	Print(arr2, ROWS, COLS);

}
