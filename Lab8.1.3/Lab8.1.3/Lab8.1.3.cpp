#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

int Count(char* str, int i)
{
	if (strlen(str) < 2)
		return 0;
	if (str[i] != 0 && str[i + 1] != 0)
		if (str[i] == ',' && str[i + 1] == '-')
			return 1 + Count(str, i + 2);
		else
			return Count(str, i + 1);
	else
		return 0;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;

	cin.getline(str, 100);
	cout << "String contained " << Count(str, 0) << " groups of ', -'" << endl;

	return 0;
}