#include <iostream>





using namespace std;

class Circle {
	public:
		const double pi = 3.141592653589793;
		Circle(float r) : radius(r), circum(2 * pi * r), area(pi * r * r) {}
		float getRadius() const { return radius; }
		float getCircum() const { return circum; }
		float getArea() const { return area; }
	private:
		float radius;
		float circum;
		float area;
		
};

class Rectangle {
	public:
		Rectangle(float l, float w) : length(l), width(w), perim((2 * l) + (2 * w)), area(l*w) {}
		float getLength() const { return length; }
		float getWidth() const { return width; }
		float getPerim() const { return perim; }
		float getArea() const { return area; }
	private:
		float length;
		float width;
		float perim;
		float area;
};

int main() {
	float r;
	float l;
	float w;

	cout << "What is the circle's radius?\n";
	cin >> r;
	Circle C1(r);
	cout << "Your circumference is : " << C1.getCircum() << ". Your area is : " << C1.getArea() << ".\n";


	cout << "What is the rectangles length and width?\n";
	cin >> l;
	cin >> w;
	Rectangle R1(l, w);
	cout << "Your perimeter is : " << R1.getPerim() << ". Your area is : " << R1.getArea() << ".\n";
	
	
	system("pause");
	return 0;
}