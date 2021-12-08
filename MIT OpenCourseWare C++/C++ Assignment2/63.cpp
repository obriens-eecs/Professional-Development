#include <iostream>

using namespace std;
void transpose(const int input[][LENGTH], int output[][WIDTH]);

void transpose(const int input[][LENGTH], int output[][WIDTH]) 
{	
	for(int i = 0; i < LENGTH; i++)
	{
		for(int j = 0; j < WIDTH; j++) 
		{
			output[j][i] = input[i][j];
		}
	}
	
}

int main()
{
	const int a[2][2] = { 1, 2, 3, 4};
	int b[2][2];
	transpose(a, b);
	cout << *a;
}
