#include<iostream>
using namespace std;
int Add(int a, int b); //�������� �������(���������� �������-Function declaration)
 //�������� ����� ��� ����, ����� ��� ������� � � ������ ����������� ���������� 
 //���� ��������� �� ������ ������.
int Sub(int a, int b);//�������� ������� ������ �� ��������� �������.
int Mul(int a, int b/*����������� ���������*/);
double Div(double a, double b);
float Power(float  a, float b);
//                   UNRESOLVE EXTERNALS
void main()
{
	setlocale(LC_ALL, "");
	//�������. �������� ��� ������� � ������� �������
	int a, b;
	float n, m;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);//����� (�������������) ������� 
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b/*������������ ���������*/) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << "������� �����: "; cin >> n;
	cout << "������� ������� � ������� ����� �������� �����: ";
	cin >> m;
	cout << n << " � ������� " << m << " ����� "<< pow(n,m);
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

float Power(float a, float b)
{
	return pow(a, b);
}