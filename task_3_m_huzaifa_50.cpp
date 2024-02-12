#include <iostream>
using namespace std;

main() {
	int x, y, z;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	cout << "Enter the value of z: ";
	cin >> z;
	
	cout << "\na. x == 2  							 ==> " << (x == 2);
	cout << "\nb. x != 5  							 ==> " << (x != 5);
	cout << "\nc. x != 5 && y >= 5  				 		 ==> " << (x != 5 && y >= 5);
	cout << "\nd. z != 0 || x == 2  				 		 ==> " << (z != 0 || x == 2);
	cout << "\ne. !(y < 10)							 ==> " << (!(y < 10));
	cout << "\nf. !(z != x+y) && z*2<x || z== x - 5  				 ==> " << (!(z != x+y) && z*2<x || z== x - 5);
}
