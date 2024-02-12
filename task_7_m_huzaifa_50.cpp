#include <iostream>
using namespace std;

main() {
	float ang1, ang2;
	
	cout << "Enter the value of angle 1: ";
	cin >> ang1;
	cout << "Enter the value of angle 2: ";
	cin >> ang2;
	
	if ( (ang1 == 90) || (ang2 == 90) ) {
		cout << "Type of triangle: Right Triangle";
	} else if ( (ang1 > 90) || (ang2 > 90) ) {
		cout << "Type of triangle: Obtuse Triangle";
	} else if ( (ang1 < 90) || (ang2 < 90) ) {
		cout << "Type of triangle: Acute Triangle";
	}
}
