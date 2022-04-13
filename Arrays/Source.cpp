#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n-----------------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS,const int COLS, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
double MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
double MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, int num);
void ShiftLeft(double arr[], const int n, int bum);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int rum);


void ShiftRight(int arr[], const int n, int num);
void ShiftRight(double arr[], const int n, int bum);
void ShiftRight(int arr[ROWS][COLS], const int ROWS,const int COLS, int rum);

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
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % ((maxRand - minRand) + minRand);
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j]<<"\t";
		}
		cout << endl;
	}
}
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
	
	return Sum(arr, ROWS, COLS)/double(ROWS*COLS);
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
				arr[i][j] == arr[i+1][j];
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
		for (int i =n-1; i>0; i--)
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
				arr[i][j] == arr[i][j]-1;
			}
		}
		arr[ROWS][COLS] == t;
	}
}
