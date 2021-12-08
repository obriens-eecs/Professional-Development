#include <iostream>

using namespace std;

int strLen(char *string)
{
	int x;
	for (int i = 0; *(string + i - 1) != '\0'; i++)
	{
		x = i;
	}
	return x;
}

int main()
{
	//char str[] = { 's', 't', 'r', 'o', 'n', 'g', ' ', 'c', 'o', 'd', 'e', 'r', '!' } ;
	char str[] = { 'o', 'k' };
	int a = strLen(str);
	cout << a;
}
