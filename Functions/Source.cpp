#include<iostream>
using namespace std;
int Add(int a, int b); //�������� �������(���������� �������-Function declaration)
 //�������� ����� ��� ����, ����� ��� ������� � � ������ ����������� ���������� 
 //���� ��������� �� ������ ������.
int Sub(int a, int b);//�������� ������� ������ �� ��������� �������.
int Mul(int a, int b/*����������� ���������*/);
double Div(double a, double b);
//                   UNRESOLVE EXTERNALS
void main()
{
	setlocale(LC_ALL, "");
	//�������. �������� ��� ������� � ������� �������
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);//����� (�������������) ������� 
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b/*������������ ���������*/) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}
int Add(int a, int b) //���������� ������� (����������� �������-function definition)
//��������� ��� ��������, �� ������� ������������ ������� (��, ��� ������ �������).
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)//��������� ������� �� ��������� � ���� �������.
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