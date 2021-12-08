#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 5;
	int b = 10;
	swap(a,b);
	cout << a << "\n" << b;
}
