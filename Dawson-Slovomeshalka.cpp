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
		{"wall", "��������� �� �� ������� �� ���-�� �������?"},
		{"glasses", "��� �������� ������." },
		{"labored", "�� ����������?" },
		{"persistent", "�� ����������!" },
		{"jumble", "��, � ��� ��� ����."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //�����, ������� ����� �������
	string theHint = WORDS[choice][HINT]; //��������� ��� �����
	string jumble = theWord; // ������������ ������� �����
	int length = jumble.size();
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\t����� ���������� � ���� ������������!\n\n";
	cout << "�������� ����� �� ��������� ����. \n";
	cout << "������� '������', ����� �������� ���������. \n";
	cout << "������� '�����', ����� ��������� ����. \n\n";
	cout << "������������ : " << jumble;
	string guess;


	do
	{
		cout << "\n\n���� �������: ";
		cin >> guess;
		if (guess == "hint") // ??
		{
			cout << theHint;
		}
		else if (guess != theWord)
		{
			cout << "�� �����!" << endl;
		}
	}
	while (guess != theWord && guess != "quit");
	

	if (guess == theWord)
	{
		cout << "\n�����! �� �������!\n\n";
	}
	cout << "������� �� ����!" << endl;
	system("PAUSE");
	return 0;
}