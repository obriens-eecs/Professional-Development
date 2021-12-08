#include <iostream>

using namespace std;
int a = 0;
int sum(int x[], int y)
{
	
	if(y>0){
	return x[0] + sum(x+1,y-1);
	}
	else return 0;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	cout << sum(a, 4);
}
