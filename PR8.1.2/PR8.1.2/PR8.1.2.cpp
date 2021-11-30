#include <iostream>

using namespace std;

bool Include(const char* str, int i)
{
	if ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n'))
		return true;

	if (str[i] != '\0')
		return Include(str, i + 1);
	else
		return false;
}


char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 1] != 0)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			strcat_s(t, sizeof(t), "***");
			return Change(dest, str, t + 3, i + 2);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	if (Include(str, 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
	char* dest1 = new char[151];
	dest1[0] = '\0';

	char* dest2;

	dest2 = Change(dest1, str, dest1, 0);

	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;

	return 0;
}