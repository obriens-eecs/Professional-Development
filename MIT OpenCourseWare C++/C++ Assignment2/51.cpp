#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

double randZeroToOne()
{
    return rand() / (RAND_MAX + 1.);
}

double piCalc(int n)
{
	srand(time(0));
	double xl[n];
	double yl[n];
	double hits = 0.0;
	
	for(int i = 0; i < n; i++){
		xl[i] = randZeroToOne();
		yl[i] = randZeroToOne();
		if( sqrt( pow(xl[i],2.0) + pow(yl[i],2.0) ) < 1)
		{
			hits = hits + 1.0;
		}
	}
	double a = (hits * 4.0) / n;	
	return a;	
}

int main()
{
	//srand(time(0));
	//int randNum = rand();
	//double xcrd = randZeroToOne();
	//double ycrd = randZeroToOne();
	//cout << xcrd << ' ' << ycrd;
	//int count = 0;
	
	//int n = 50;
	//double xl[n];
	//double yl[n];
	//int hits = 0;
	
	//for(int i = 0; i < n; i++){
		//xl[i] = randZeroToOne();
		//yl[i] = randZeroToOne();
		//if( sqrt( pow(xl[i],2.0) + pow(yl[i],2.0) ) < 1)
		//{
			//hits = hits + 1;
		//}
	//}
	//cout << hits;
	//return 0;
	double a = piCalc(100000);
	cout << a;
}
