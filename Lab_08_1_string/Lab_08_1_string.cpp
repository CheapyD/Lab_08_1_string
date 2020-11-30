#include <iostream>
#include <string>
using namespace std;

int Find(const string str, const char ch)
{
	size_t pos = str.length();
	int k = 0;
	int i = 0;
	while ((pos = str.find_last_of(ch, pos)) != -1)
	{
		k++;
		if (k == 4)
		{
			i = pos;
			break;
		}
		pos--;
	}
	return i;
}

string Change(string& s, const char ch)
{
	size_t pos = 0;
	while ((pos = s.find(ch, pos)) != -1)
			s.replace(pos, 1, "**");
	return s;
}

int main()
{
	string str;
	char ch = '.';

	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << "i = " << Find(str, ch) << endl;
	string dest = Change(str, ch);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	system("pause");
	return 0;
}