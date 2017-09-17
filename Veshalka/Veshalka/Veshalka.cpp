#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int MAX_WRONG = 8;
	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = " ";
	cout << "����� ���������� � ���� '��������'. �����! " << endl;
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\n� ��� ���� " << (MAX_WRONG - wrong);
		cout << "\n���������� ���������� ������ = " << endl;
		cout << "\n�� ������������ ��������� ����� : " << used << endl;
		cout << "��� ������. ����� : " << soFar << endl;
	}
	char guess;
	cout << "������� ���� ������� : ";
	cin >> guess;
	guess = toupper(guess);
	while (used.find(guess) != string::npos)
	{
		cout << "\n�� ��� ������� " << guess << endl;
		cout << "\n������� ���� ������� : ";
		cin >> guess;
		guess = toupper(guess);
	}
	used += guess;
	if (THE_WORD.find(guess) != string::npos)
	{
		cout << "\n�����! " << guess << " ���� � �����!" << endl;
		for (int i = 0; i < THE_WORD.length(); i++)
		{
			if (THE_WORD[i] == guess)
			{
				soFar[i] = guess;
			}
		}
	}
	else
	{
		cout << "�������� " << guess << " ��� � �����." << endl;
		++wrong;
	}
	if (wrong == MAX_WRONG)
	{
		cout << "\n��c '��������'!" << endl;
	}
	else
	{
		cout << "\n�� �������!" << endl;
	}
	cout << "\n���������� ����� = " << THE_WORD << endl;
	system("PAUSE");
	return 0;
}