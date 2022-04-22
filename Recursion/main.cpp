#include<iostream>
using namespace std;

//Stack-(стопка) модель памяти, из которой последний записанный эл. считывается первым.

void elevator(int floor);
//int factorial(int n);
//double power(double n, int s);
int fibonacci(int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	int s;
	/*cout << "Введите число для выч. Факториала: "; cin >> n;
	cout << factorial(n) << endl;*/
	/*cout << "Введите число "; cin >> n;
	cout << "Введите его степень "; cin >> s;
	cout << "Возведение в степень результат " << power(n, s) << endl;
	main();*/
	//заданное кол-во чисел, задание второе
	cout << "Введите количество чисел Фибоначчи: "; cin >> s;
	for (int i = 0; i < s; i++)
	{
		cout << fibonacci(i)<< endl;
	}

	//выводит до заданного предела, первое задание 
	/*for (int i = 0; i < 13; i++)
	{
		cout << fibonacci(i) << endl;
		
 }*/
	

}
void elevator(int floor)
{

	//условие выхода
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return; //разрывает цепочку
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
	/*int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);*/
}
//int factorial(int n)
//{
//	первый вариант факториала
//	if (n < 0)return 0;
//	if (n == 0)return 1;
//	 return n*factorial(n - 1);
//	второй вариант факториала
//	return n < 0 ? 0: n == 0 ? 1 : n*factorial(n - 1);
//}
//double power(double n, int s)
//{
//	if (s == 0)return 1 ;
//	else if(s>0)return n*power(n, s - 1);
//	else if (s < 0)return 1 / n*power(n, s + 1);
//	return s == 0 ? 1 : s > 0 ? n*power(n, s - 1) : 1 / n*power(n, s + 1);
//	return s == 0 ? 1 : s > 0 ? n*power(n, s - 1) : 1 / power(n, -s);
//}
int fibonacci(int n)
{
	/*if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n-2);*/
	return n == 0 ? 0 : n == 1 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

