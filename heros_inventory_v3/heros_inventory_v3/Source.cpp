#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

bool compare(int i, int j) {
	return (i > j); 
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	vector<int>::const_iterator iter;
	cout << "������� ������ ��������." << endl;
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	cout << "������� ������� : " << endl;
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "���� ����" << endl;
	int score;
	cout << "������� ���� ��� ������" << endl;
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		cout << "���� ������!" << endl;
	}
	else
	{
		cout << "���� �� ������!" << endl;
	}
	cout << "������������� �����" << endl;
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout << "������� �����" << endl;
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}
	cout << "��������� �����" << endl;
	sort(scores.begin(), scores.end(), compare);
	cout << "\nHigh Scores : " << endl;
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	system("PAUSE");
	return 0;
}
