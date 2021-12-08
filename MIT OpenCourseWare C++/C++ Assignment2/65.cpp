#include <iostream>

using namespace std;

void reverse(int *x, int y) 
{	
	int z[y];
	for(int i = 0; i < y; i++){
		*(z + i) = *(x + i);
		
	}
	for(int j = 0; j < y; j++){
		*(x + j) = *(z + y - 1 - j); 
	}
	
}

int main()
{
	int a[] = {1, 2, 3, 4};
	reverse(a, 4);
	cout << *a;
}
