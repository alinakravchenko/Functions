#include<iostream>
using namespace std;
int Add(int a, int b); //прототип функции(объ€вление функции-Function declaration)
 //прототип нужен дл€ того, чтобы им€ функции и еЄ список принимаемых параметров 
 //были известены на момент вызова.
int Sub(int a, int b);//прототип состоит только из заголовка функции.
int Mul(int a, int b/*принимаемые параметры*/);
double Div(double a, double b);
//                   UNRESOLVE EXTERNALS
void main()
{
	setlocale(LC_ALL, "");
	//арифмет. операции над числами с помощью функции
	int a, b;
	cout << "введите два числа: "; cin >> a >> b;
	int c = Add(a, b);//вызов (использование) функции 
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b/*передаваемые параметры*/) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}
int Add(int a, int b) //реализаци€ функции (определение функции-function definition)
//реализует тот алгоритм, за который ответственна функци€ (то, что делает функци€).
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)//релизаци€ состоит из заголовка и тела функции.
{
	return a - b;
}
int Mul(int a, int b)
{
	return a*b;
}
double Div(double a, double b)
{
	return a / b;
}