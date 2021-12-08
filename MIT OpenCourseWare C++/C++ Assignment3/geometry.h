class Point
{
	int x, y;

public:
	Point(int xx = 0, int yy = 0) {x = xx; y = yy; }
	int getX() const { return x; }
	int getY() const { return y; }
	void setX(const int xx) { x = xx; }
	void setY(const int yy) { y = yy; }
};

class PointArray {
	int size;
	Point *points;
	
	void resize(int n);
		
public :
		PointArray();		
		PointArray(const Point points[], const int size);		
		PointArray(const PointArray &pv);	
		~PointArray();
		
		void clear();
		int getSize() const { return size;}
		void push_back(const Point &p);
		void insert(const int position, const Point &p);		
		void remove(const int pos);		
		Point *get(const int pos);		
		const Point *get(const int pos) const;
};

class Polygon {
protected:
		static int numPolygons;
		PointArray points;
		
public:
		Polygon(const PointArray &pa);
		Polygon(const Point points[], const int numPoints);
		virtual double area() const = 0;
		static int getnumPolygons() {return numPolygons;}
		int getNumSides() const {return points.getSize();}
		const PointArray *getPoints() const {return &points;}
		~Polygon() {--numPolygons;}
};

class Rectangle : public Polygon {
public:
	Rectangle(const Point &a, const Point &b);
	Rectangle(const int x1, const int y1, const int x2, const int y2);
	~Rectangle() {--numPolygons;}
	virtual double area() const;
};

class Triangle : public Polygon {
public:
	Triangle(const Point &a, const Point &b, const Point &c);
	virtual double area() const;
	~Triangle() {--numPolygons;}
};
