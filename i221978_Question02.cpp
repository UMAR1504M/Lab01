#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
	float x;
	float y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	void setX(float p1) {
		x = p1;
	}
	void setY(float p2) {
		y = p2;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
	double distance(int a, int b) {
		return sqrt(((x - a) * (x - a)) + ((y - b) * (y - b)));
	}
};
int main() {
	float a, b;
	Point p;
	cout << "Enter 1st Coordinate : ";
	cin >> a;
	cout << "Enter 2nd Coordinate : ";
	cin >> b;
	p.setX(a);
	p.setY(b);
	cout << "The first Coordinate is: " << p.getX();
	cout << " , The second Coordinate is: " << p.getY() << endl;
	cout << "Distance : " << p.distance(a, b) << endl;
	return 0;
}