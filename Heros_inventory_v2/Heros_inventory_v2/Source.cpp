#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	vector<string> inventory;
	inventory.push_back("���");
	inventory.push_back("�����");
	inventory.push_back("���");
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	cout << "���� �������� : " << endl;

	for (iter = inventory.begin(); iter != inventory.end(); iter++)
	{
		cout << *iter << endl;
	}
	system("PAUSE");
	return 0;
}