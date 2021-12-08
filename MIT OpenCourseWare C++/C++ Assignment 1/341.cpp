#include <iostream>

using namespace std;

int main()

{
	int N;
	
	while(true)
	
	{
	
		cin >> N;
		(N % 5 == 0) && (N > 0) ? cout << (N / 5) << "\n" : cout << -1 << "\n";
	
	}

}
