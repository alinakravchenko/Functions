#include<iostream>
using namespace std;

//Stack-(������) ������ ������, �� ������� ��������� ���������� ��. ����������� ������.

void elevator(int floor);
//int factorial(int n);
//double power(double n, int s);
int fibonacci(int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	int s;
	/*cout << "������� ����� ��� ���. ����������: "; cin >> n;
	cout << factorial(n) << endl;*/
	/*cout << "������� ����� "; cin >> n;
	cout << "������� ��� ������� "; cin >> s;
	cout << "���������� � ������� ��������� " << power(n, s) << endl;
	main();*/
	//�������� ���-�� �����, ������� ������
	cout << "������� ���������� ����� ���������: "; cin >> s;
	for (int i = 0; i < s; i++)
	{
		cout << fibonacci(i)<< endl;
	}

	//������� �� ��������� �������, ������ ������� 
	/*for (int i = 0; i < 13; i++)
	{
		cout << fibonacci(i) << endl;
		
 }*/
	

}
void elevator(int floor)
{

	//������� ������
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return; //��������� �������
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
	/*int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);*/
}
//int factorial(int n)
//{
//	������ ������� ����������
//	if (n < 0)return 0;
//	if (n == 0)return 1;
//	 return n*factorial(n - 1);
//	������ ������� ����������
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

