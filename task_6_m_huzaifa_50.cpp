#include <iostream>
using namespace std;

main() {
	float side1, side2, side3;
	string res;
	
	cout << "Enter the length of side 1: ";
	cin >> side1;
	cout << "Enter the length of side 2: ";
	cin >> side2;
	cout << "Enter the length of side 3: ";
	cin >> side3;
	
	if ((side1 == side2) && (side2 == side3)) {
		cout << "Type of triangle: Equilateral Triangle";
	} else if (side1 == side2 || side2 == side3 || side3 == side1 ) {
		cout << "Type of triangle: Isosceles Triangle";
	} else {
		cout << "Type of triangle: Scalene Triangle";
	}
}
