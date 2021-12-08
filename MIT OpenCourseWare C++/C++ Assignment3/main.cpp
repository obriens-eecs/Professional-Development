#include <iostream>
#include "geometry.h"

using namespace std;

void printAttributes(Polygon *polyPtr) {
		cout << polyPtr->area() << endl;
		const PointArray *pa = polyPtr->getPoints();
		for (int i = 0; i < pa->getSize(); i++) {
			cout << "(" << pa->get(i)->getX() << "," << pa->get(i)->
			getY() << ")" << endl;
		}
	}
	
int main(int argc, char *argv[]) {
	cout << "Enter lower left and upper right coords of rectangle as four space separated integers: ";
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	Point a(x1, y1), b(x2, y2);
	Rectangle r(a, b);
	printAttributes(&r);
	
	cout << "Enter three coordinates of triangle as six space seperated integers: ";
	int X1, Y1, X2, Y2, X3, Y3;
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
	Point A(X1, Y1), B(X2, Y2), C(X3, Y3);
	Triangle T(A, B, C);
	printAttributes(&T);
	
	return 0;
}
