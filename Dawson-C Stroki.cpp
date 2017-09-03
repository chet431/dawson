#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	string word1 = "Game over!";
	char word2[] = "Game over!";
	string phrase = word1 + " " + word2;
	if (word1 == word2)
	{
		cout << "word1 נאגום word2" << endl;
	}
	if (phrase.find(word2) != string::npos)
	{
		cout << "word2 וסעü ג פנאחו" << endl;
	}
	system("Pause");
	return 0;
}