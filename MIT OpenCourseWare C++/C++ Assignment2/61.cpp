#include <iostream>

using namespace std;

void printArray(int x[], int y) 
{
	for(int i = 0; i < y; i++){
		i < y - 1 ? cout << x[i] << ", " : cout << x[i];
		
	}
}

int main()
{
	int x[] = {1, 2, 3, 4};
	int y = 4;
	printArray(x,y);
	return 0;
}
