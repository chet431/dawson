#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Ударялись ли вы головой об что-то твердое?"},
		{"glasses", "Это помогает видеть." },
		{"labored", "Не получается?" },
		{"persistent", "Не сдавайтесь!" },
		{"jumble", "То, о чем эта игра."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //слово, которое нужно угадать
	string theHint = WORDS[choice][HINT]; //подсказка для слова
	string jumble = theWord; // перемешанный вариант слова
	int length = jumble.size();
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tДобро пожаловать в игру Словомешалка!\n\n";
	cout << "Соберите слово из доступных букв. \n";
	cout << "Введите 'помощь', чтобы получить подсказку. \n";
	cout << "Введите 'выход', чтобы закончить игру. \n\n";
	cout << "Словомешалка : " << jumble;
	string guess;


	do
	{
		cout << "\n\nВаша попытка: ";
		cin >> guess;
		if (guess == "hint") // ??
		{
			cout << theHint;
		}
		else if (guess != theWord)
		{
			cout << "Не верно!" << endl;
		}
	}
	while (guess != theWord && guess != "quit");
	

	if (guess == theWord)
	{
		cout << "\nВерно! Вы угадали!\n\n";
	}
	cout << "Спасибо за игру!" << endl;
	system("PAUSE");
	return 0;
}