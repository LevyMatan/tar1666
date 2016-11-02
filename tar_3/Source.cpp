#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;
const double PI = 3.141592653589793238463;
class MyCircle
{
public:
	MyCircle(double x, double y, double r);
	~MyCircle();
	void checkInside(double x, double y);
	double calcArea();
	double calcArea(double flag);
	double calcCircumference();
	double calcCircumference(double flag);
private:
	double xCenter;
	double yCenter;
	double Radius;

};

MyCircle::MyCircle(double x, double y, double r)
{
	xCenter = x;
	yCenter = y;
	Radius = r;
}

MyCircle::~MyCircle()
{
}

void MyCircle::checkInside(double x, double y) {
	// This function checks whether the input coordinates (x,y) is found inside the circle
	double distanceFromCenter = pow(pow(x - xCenter, 2) + pow(y - yCenter, 2), 0.5);
	if (distanceFromCenter <= Radius) 
		cout << "The given point is inside the circle" << endl;	
	else
		cout << "The given point is not found inside the circle" << endl;

}
/**
	Returns the circle area
*/
double MyCircle::calcArea() {
	return PI * pow(Radius, 2);
}
/**
	Returns the circle area and prints it
	@param flag can be anything
*/
double MyCircle::calcArea(double flag) {
	// Will also print the the circle area to console
	double circleArea = PI * pow(Radius, 2);
	cout << "The circle area is:" << setprecision(2) << fixed << circleArea << endl;
	return circleArea;
}
/**
Returns the circle Circumference and prints it
*/
double MyCircle::calcCircumference() {
	return PI * Radius * 2;
}
/**
Returns the circle Circumference and prints it
@param flag can be anything
*/
double MyCircle::calcCircumference(double flag) {
	// Will also print the the circle area to console
	double circleCircumference = PI * Radius * 2;
	cout << "The circle area is:" << setprecision(2) << fixed << circleCircumference << endl;
	return circleCircumference;
}

int main() {

	double x, y, r;
	cout << "Hello! this is the circles program (tar1_3)\n";
	cout << "Please enter a circle by the next format: circle center coordinates (x,y) and radius\n";
	cin >>  x >>  y >>  r;
	MyCircle circ(x, y, r);
	circ.calcArea(1);	
	circ.calcCircumference(1);
	cout << "\nNow please enter a point in the plane (x,y) and I will tell you if it inside the circle" << endl;
	cin >> x >> y;
	circ.checkInside(x, y);
	
	return 0;
}