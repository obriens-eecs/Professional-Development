#include <iostream>

using namespace std;

int main()

{
	int N;
	
	while(true)
	
	{
	
		cin >> N;
		if(N % 5 == 0){
			cout << (N / 5) << "\n";
		}
		else if(N < 0)
		{
			cout << "Goodbye!";
			break;
		}
	
	}

}
