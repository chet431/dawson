#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'0', 'X', '0'},
								{ ' ', 'X', 'X' },
								{ '0', '0', 'X'} };
	cout << "���� ��� ���������-������� : " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\nX ������������ � ������ ������.\n\n";
	board[1][0] = 'X';
	cout << "������ ���� �������� ��� : " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n�������� ��������!" << endl;
	system("PAUSE");
	return 0;
}