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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "������������ �������� �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� �������: " << MaxValueIn(arr, n) << endl;

	int num;
	cout << "������� ���������� �������: "; cin >> num;
	ShiftLeft(arr, n, num);
	Print(arr, n);
	cout << "������� ���������� �������: "; cin >> num;
	ShiftRight(arr, n, num);
	Print(arr, n);
	


	cout << delimiter << endl;
	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, m) << endl;
	cout << "������������ �������� �������: " << MinValueIn(brr, m) << endl;
	cout << "������������ �������� �������: " << MaxValueIn(brr, m) << endl;
	int bum;
	cout << "������� ���������� �������: "; cin >>bum;
	ShiftLeft(brr, m, bum);
	Print(brr, m);
	cout << "������� ���������� �������: "; cin >> bum;
	ShiftRight(brr, m, bum);
	Print(brr, m);

	cout << delimiter << endl;

	
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << MinValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << MaxValueIn(arr2, ROWS, COLS) << endl;
	int rum;
	cout << "������� ���������� �������: "; cin >> rum;
	ShiftLeft(arr2, ROWS,COLS, rum);
	Print(arr2, ROWS, COLS);
	cout << "������� ���������� �������: "; cin >> rum;
	ShiftRight(arr2, ROWS, COLS, rum);
	Print(arr2, ROWS, COLS);

}
