#include <iostream>
using namespace std;

main() {
	float ang1, ang2, ang3, triangle;
	cout << "Enter the the value of angle 1: ";
	cin >> ang1;
	cout << "Enter the the value of angle 2: ";
	cin >> ang2;
	cout << "Enter the the value of angle 1: ";
	cin >> ang3;
	
	triangle = ang1 + ang2 + ang3;
	if (triangle <= 180 && triangle > 0) {
		cout << "Triangle is valid.";
	} else {
		cout << "Triangle is not valid.";
	}
}
