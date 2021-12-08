#include <iostream>

using namespace std;

int sum(int x[], int y)
{
	int sum = 0;
		for(int z=0;z<y;z++)
		{
			sum = sum + x[z];
		}
		return sum;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	cout << sum(a, 4);
}
