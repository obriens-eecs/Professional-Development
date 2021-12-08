#include <iostream>
using namespace std;
int main()

{
int listSize;
int currentNum;
int sum = 0;
int mean = 0;
int max = 0;
int min = 1000; 
int range = 0;

cin >> listSize;


for (int listpos = 0; listpos < listSize; listpos++)
{
	cin >> currentNum;
	if (currentNum > max){
		max = currentNum;
	}
	if (currentNum < min){
		min = currentNum;
	}
	sum = sum + currentNum;
}
mean = sum / listSize;
range = max - min;

cout << "Mean: " << mean << "\n";
cout << "Max: " << max << "\n";
cout << "Min: " << min << "\n";
cout << "Range: " << range << "\n";
return 0;

}
