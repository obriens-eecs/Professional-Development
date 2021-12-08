#include <iostream>

using namespace std;

int main() 
{
	char *oddOrEven = "Never odd or even";
	char *nthCharPtr = &oddOrEven[5];
	nthCharPtr = nthCharPtr - 2;
	cout << *nthCharPtr << "\n";
	char **pointerPtr = &nthCharPtr;
	cout << *pointerPtr << "\n";
	cout << **pointerPtr << "\n";
	nthCharPtr = nthCharPtr + 1;
	cout << nthCharPtr - oddOrEven;
}
