#include "geometry.h"
#include <cstdio>
#include <cmath>

using namespace std;

	PointArray::PointArray(){
		size = 0;
		points = new Point[0];
	}
	
	PointArray::PointArray(const Point ptsToCopy[], const int toCopySize) {
		size = toCopySize;
		points = new Point[toCopySize];
		for(int i=0; i<toCopySize; ++i){
			this->points[i] = ptsToCopy[i];
		}
	}	
		
	PointArray::PointArray(const PointArray &pv) {
		size = pv.size;
		points = new Point[size];
		for(int i=0; i<size; i++){
			points[i] = pv.points[i];
		}
	}
	PointArray::~PointArray(){
		delete[] points;	
	}
	
	void PointArray::resize(int n){
		Point *arr = new Point[n];
		int minSize = (size > n ? n : size);
		for(int i = 0; i < minSize; i++){
			arr[i] = points[i];
		}
		delete[] points;
		size = n;
		points = arr;
	}
		
	void PointArray::clear(){
		resize(0);
	}
		
	//const int getSize(){
		//return size;
	//}
		
	void PointArray::push_back(const Point &p){
		resize(size + 1);
		points[size - 1] = p;
	}
		
	void PointArray::insert(const int position, const Point &p){
		resize(size + 1);
		for(int i = size - 1; i > position; i--) {
			points[i] = points[i - 1];
		}	
		points[position] = p;
		
	}	
		
	void PointArray::remove(const int pos){
		if(pos >= 0 && pos < size){
		for(int i = pos; i < size - 2; i++) {
			points[i] = points[i + 1];
		}	
		resize(size - 1);
		}
	}
		
	Point *PointArray::get(const int pos){
		return pos >= 0 && pos < size ? points + pos : NULL;	
	}
		
	const Point *PointArray::get(const int pos) const{
		return pos >= 0 && pos < size ? points + pos : NULL;
	}
	
	int Polygon::numPolygons = 0;
	
	Polygon::Polygon(const PointArray &pa) : points(pa) {		
		numPolygons++;
	}
	
	Polygon::Polygon(const Point pointArr[], const int numPoints) : 
		points(pointArr, numPoints) {
		numPolygons++;
	}
	
	Point constructorPoints[4];
	
	Point *updateConstructorPoints(const Point &p1, const Point &p2, 
		const Point &p3, const Point &p4 = Point(0,0)) {
			constructorPoints[0] = p1;
			constructorPoints[1] = p2;
			constructorPoints[2] = p3;
			constructorPoints[3] = p4;
			return constructorPoints;
		}
		
	Rectangle::Rectangle(const Point &a, const Point &b): 
		Polygon(updateConstructorPoints(a, Point( a.getX(), b.getY() ), b, 
		Point( b.getX(), a.getY() )), 4) 
		{}
		
	Rectangle::Rectangle(const int x1, const int y1, const int x2, const int y2) :
		Polygon(updateConstructorPoints(Point(x1,y1), Point(x1,y2), 
			Point(x2,y2), Point(x2,y1)), 4)
		{}
		
	double Rectangle::area() const {
		int length = points.get(1)->getY() - points.get(0)->getY();
		int width = points.get(2)->getX() - points.get(1)->getX();
		return abs((double)length * width);
	}
	// get(int) returns a point, and we have to use -> instead of . 
	// because of priority of . > *, i.e. (*points). == points->
	
	Triangle::Triangle(const Point &a, const Point &b, const Point &c) :
		Polygon(updateConstructorPoints(a, b, c), 3)
	{}

	double Triangle::area() const {
		int sideAa = points.get(0)->getY() - points.get(1)->getY();
		int sideAb = points.get(0)->getX() - points.get(1)->getX();
		double a = sqrt( sideAa * sideAa + sideAb * sideAb );
		
		int sideBa = points.get(1)->getY() - points.get(2)->getY();
		int sideBb = points.get(1)->getX() - points.get(2)->getX();
		double b = sqrt( sideBa * sideBa + sideBb * sideBb );
		
		int sideCa = points.get(2)->getY() - points.get(0)->getY();
		int sideCb = points.get(2)->getX() - points.get(0)->getX();
		double c = sqrt( sideCa * sideCa + sideCb * sideCb );
		
		double s = (a + b + c) / 2.0;
		return sqrt( s * (s - a) * (s - b) * (s - c) );
	}
	
		
int main()
{

}
