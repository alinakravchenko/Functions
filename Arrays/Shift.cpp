#include"Shift.h"
#include"stdafx.h"

void ShiftLeft(double arr[], const int n, int bum)
{

	for (int i = 0; i < bum; i++)
	{
		double t = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = t;
	}

}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int rum)
{
	for (int i = 0; i < rum; i++)
	{
		double t = arr[ROWS][COLS];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] == arr[i + 1][j];
			}
		}
		arr[ROWS][COLS] == t;
	}
}
void ShiftRight(int arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int t = arr[n - 1];
		for (int i = n - 1; i>0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = t;
	}
}
void ShiftRight(double arr[], const int n, int bum)
{

	for (int i = 0; i < bum; i++)
	{
		double t = arr[n - 1];
		for (int i = n - 1; i>0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = t;
	}

}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int rum)
{
	for (int i = 0; i < rum; i++)
	{
		double t = arr[ROWS][COLS];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] == arr[i][j] - 1;
			}
		}
		arr[ROWS][COLS] == t;
	}
}
