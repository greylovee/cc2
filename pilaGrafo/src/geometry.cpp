#include <cmath>
#include "geometry.h"

PointArray::PointArray(){
    size = 0;
    points = new Point[0];
}

PointArray::PointArray (const Point pts[], const int size){
    this->size = size ;
    this->points = new Point [this->size];
    for(int i = 0; i < this->size ; ++i) {
        this->points[i] = pts[i];
    }
}

PointArray::PointArray(const PointArray &pa){
    this->size = pa.size;
    this->points = new Point[this->size];
    for(int i = 0; i < this->size; i++) {
        this->points[i] = pa.points[i];
    }
}

PointArray::~PointArray() {
    delete[] points;
}

void PointArray::resize(int newSize){
	Point *pts = new Point[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i < minSize; i++){
		points[i] = points[i];
	}
    delete[] points;
    size = newSize;
    points = pts;
}

void PointArray::clear(){
	resize(0);
}

void PointArray::push_back(const Point &p) {
	resize(size + 1);
	points[size - 1] = p;
}

void PointArray::insert(const int pos, const Point &p){
	resize(size + 1);
	for(int i = size - 1; i > pos; i--) {
		points[i] = points[i - 1];
	}

	points[pos] = p;
}

void PointArray::remove(const int pos) {
	if(pos >= 0 && pos < size){
		for(int i = pos; i < size - 2; i++) {
			points [i] = points [i + 1];
		}
		resize (size - 1);
	}
}

Point *PointArray::get(const int pos){
	return pos >= 0 && pos < size ? points + pos : nullptr;
}

const Point *PointArray::get(const int pos) const {
	return pos >= 0 && pos < size ? points + pos : nullptr;
}


int Polygon::numPolygons = 0;

Polygon::Polygon(const PointArray &pa) : points(pa){
	++numPolygons;
}

Polygon::Polygon(const Point pointArr[], const int numPoints) : points(pointArr, numPoints){
	++numPolygons;
}


Point constructorRPoints[4];
Point *updateConstructorPoints(const Point &p1, const Point &p2,
							    const Point &p3, const Point &p4 = Point(0, 0)){
	constructorRPoints[0] = p1;
	constructorRPoints[1] = p2;
	constructorRPoints[2] = p3;
	constructorRPoints[3] = p4;
	return constructorRPoints;
}

Rectangle::Rectangle(const Point &p1, const Point &p2)
	: Polygon(updateConstructorPoints(p1, Point(p1.getX(), p2.getY()), p2, Point(p2.getX(), p1.getY())), 4) {}

Rectangle::Rectangle(const int p1x, const int p1y, const int p2x, const int p2y)
	: Polygon(updateConstructorPoints(Point(p1x, p1y), Point(p1x, p2y), Point(p2x, p2y), Point(p2x, p1y) ), 4) {}

double Rectangle::area() const{
	int length = points.get(1) -> getY() - points.get(0) -> getY();
	int width  = points.get(2) -> getX() - points.get(1)  -> getX();
	return std::abs((double)width * length);
}

Triangle::Triangle(const Point &a, const Point &b, const Point &c)
		: Polygon(updateConstructorPoints(a, b, c), 3) {}

double Triangle::area() const{
	int dx01 = points.get(0) -> getX() - points.get(1) -> getX();
	int	dx12 = points.get(1) -> getX() - points.get(2) -> getX();
	int	dx20 = points.get(2) -> getX() - points.get(0) -> getX();
	int dy01 = points.get(0) -> getY() - points.get(1) -> getY();
	int	dy12 = points.get(1) -> getY() - points.get(2) -> getY();
	int	dy20 = points.get(2) -> getY() - points.get(0) -> getY();

	double a = std::sqrt(dx01*dx01 + dy01*dy01);
	double b = std::sqrt(dx12*dx12 + dy12*dy12);
	double c = std::sqrt(dx20*dx20 + dy20*dy20);

	double s = (a + b + c)/2;

	return std::sqrt(s * (s - a) * (s - b) * (s - c));

}
