#include<iostream>
#include<conio.h>
using namespace std;
#define vertical_SHIFT         "\n\n\n\n\n"
#define horizontal_SHIFT       "\t\t\t\t\t"
void InitField(char field[], const int n, char player);
void PrintField(char field[], const int n, char player);
void MOVE(char field[], const int n, char player);
void CHECK(char field[], const int n, char player);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = {};
	/*for (int i = 0; i < n; i++)field[i] = i + 49;*/ //49 - ASCII-код символа 1 || можно '1'
	/*PrintField(field, n, '0');*/
	do 
	{
		InitField(field, n, '0');
		cout << "Ещё разочек? Да-anykey, Нет-escape" << endl;
	} while (_getch() != 27);

}
void InitField(char field[], const int n, char player)
{
	for (int i = 0; i < n; i++)field[i] = 0;
	PrintField(field, n, player);
}
void PrintField(char field[], const int n, char player)
{
	system("CLS"); //функция system() вызывает любую команду командной строки,
	//любую программу, которую можно запустить из командной строки
	//команда CLS очищает экран (clear)
	cout << vertical_SHIFT;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << horizontal_SHIFT;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if(j<2)cout<< " | ";
		}
		cout << endl;
		if(i>0)cout <<horizontal_SHIFT<< "--- --- ---\n";
	}
	/*MOVE(field, n, player);*/
	CHECK(field, n, player);
}
void MOVE(char field[], const int n, char player)
{
	char key;
	do
	{
	 key = _getch();
	if (key == 27)return; //Escape
	if (key<'1' || key>'9')cout << "\aВы плохо нажимаете на кнопки!Внимательно!!!!\n";
	// \a(alarm/alert)-вывод в консоль звукового сигнала
	else if (field[key - 49] != 0 && field[key - 49] != ' ')cout << "\aКлетка уже занята\n";
	} while (key<'1' || key>'9' || field[key-49]!=0 && field[key-49]!=' ');
	field[key - 49] = player;
	PrintField(field, n, player/* == 'X'?'0':'X'*/);
	
}
void CHECK(char field[], const int n, char player)
{
	bool game_over = false;
	if (field[0] == player && field[4] == player && field[8] == player)game_over = true;
	if (field[2] == player && field[4] == player && field[6] == player)game_over = true;
	for (int i = 6; i >= 0; i -= 3)
	{
		if (field[i] == field[i + 1] && field[i] == field[i + 2]&&field[i] == player)game_over = true;
	}
	for (int i = 0; i < 3; i++)
	{
		if (field[i] == field[i + 3] && field[i] == field[i + 6]&& field[i] == player)game_over = true;
	}
	if (game_over)
	{
		cout << player << " победил\n";
		return;
	}
	bool draw = true; //изначально предполагаем, что у нас ничья,
	//но это нужно проверить:
	for (int i = 0; i < n; i++)
	{
		if (field[i] == 0 || field[i] == ' ')
		{
			draw = false;
			break;
		}
	}
	if (draw)
	{
		cout << "ничья" << endl;
		return;
	}
	/*PrintField(field, n, player == 'X' ? '0' : 'X');*/
	MOVE(field, n, player == 'X'?'0':'X');

}