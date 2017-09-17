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
	cout << "Добро пожаловать в игру 'Виселица'. Удачи! " << endl;
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nУ вас есть " << (MAX_WRONG - wrong);
		cout << "\nКоличество оставшихся ошибок = " << endl;
		cout << "\nВы использовали следующие буквы : " << used << endl;
		cout << "Так близко. Буква : " << soFar << endl;
	}
	char guess;
	cout << "Введите вашу попытку : ";
	cin >> guess;
	guess = toupper(guess);
	while (used.find(guess) != string::npos)
	{
		cout << "\nВы уже угадали " << guess << endl;
		cout << "\nВведите вашу попытку : ";
		cin >> guess;
		guess = toupper(guess);
	}
	used += guess;
	if (THE_WORD.find(guess) != string::npos)
	{
		cout << "\nВерно! " << guess << " есть в слове!" << endl;
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
		cout << "Извините " << guess << " нет в слове." << endl;
		++wrong;
	}
	if (wrong == MAX_WRONG)
	{
		cout << "\nВаc 'повесили'!" << endl;
	}
	else
	{
		cout << "\nВы угадали!" << endl;
	}
	cout << "\nПравильное слово = " << THE_WORD << endl;
	system("PAUSE");
	return 0;
}