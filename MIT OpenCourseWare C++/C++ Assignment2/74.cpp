#include <iostream>

using namespace std;

void swap(int **a, int **b)
{
	int *c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int x = 5; 
	int y = 6;
	int *ptr1 = &x; 
	int *ptr2 = &y;
	swap(&ptr1, &ptr2);
	cout << *ptr1 << ' ' << *ptr2 ; // Prints "6 5"
}
