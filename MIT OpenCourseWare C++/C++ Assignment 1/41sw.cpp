#include <iostream>

using namespace std;

int main ()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The factorial of " << number << " is " ;
	
	switch(number) {
		case 1:
		cout << 1 << ".\n";
		break;
		
		case 2:
		cout << 2 << ".\n";
		break;
		
		case 3:
		cout << 6 << ".\n";
		break;
		
		case 4:
		cout << 24 << ".\n";
		break;
		
		case 5:
		cout << 120 << ".\n";
		break;
	}
	
	return 0;
}
