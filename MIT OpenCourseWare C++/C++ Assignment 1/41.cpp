#include <iostream>

using namespace std;

int main ()
{
	double number;
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The factorial of " << number << " is " ;
	double accumulator = 1.0;
	if (number < 0){
		for(; number < 0; accumulator *= number++);
	}
	else {
	for(; number > 0; accumulator *= number--);
	cout << accumulator << ".\n";
	}
	return 0;
}
