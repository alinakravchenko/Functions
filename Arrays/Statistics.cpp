#include"Statistics.h"
#include"stdafx.h"
int Sum(int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{

	return Sum(arr, ROWS, COLS) / double(ROWS*COLS);
}
int MinValueIn(int arr[], const int n)
{
	int MinValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValueIn)
			MinValueIn = arr[i];
	}
	return MinValueIn;

}
double MinValueIn(double arr[], const int n)
{
	double MinValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValueIn)
			MinValueIn = arr[i];
	}
	return MinValueIn;

}
double MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double MinValueIn = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < MinValueIn)
				MinValueIn = arr[i][j];
		}
	}
	return MinValueIn;
}
int MaxValueIn(int arr[], const int n)
{
	int MaxValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValueIn)
			MaxValueIn = arr[i];
	}
	return MaxValueIn;
}
double MaxValueIn(double arr[], const int n)
{
	double MaxValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValueIn)
			MaxValueIn = arr[i];
	}
	return MaxValueIn;
}
double MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double MaxValueIn = arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > MaxValueIn)
				MaxValueIn = arr[i][j];
		}
	}
	return MaxValueIn;
}
void ShiftLeft(int arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int t = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = t;
	}
}