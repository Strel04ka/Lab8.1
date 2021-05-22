#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

int Count(char* s)
{
	int k = 0, pos = 0;
	char* t;
	while (t = strchr(s + pos, ','))
	{
		pos = t - s + 1;
		if (s[pos] == '-')
			k++;
	}
	return k;
}

int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "String contained " << Count(str) << " groups of ', -'" << endl;

	return 0;
}