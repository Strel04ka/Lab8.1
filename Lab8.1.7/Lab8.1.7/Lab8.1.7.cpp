#include <iostream> 
#include <string> 

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos] == '-')
			k++;
	}
	return k;
}

int main()
{
	string str;

	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << "String contained " << Count(str) << " groups of ', -'" << endl;

	return 0;
}