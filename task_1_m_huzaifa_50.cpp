#include <iostream>
using namespace std;

main() {
	int inp;
	cout << "Enter a number to find its absolute value: ";
	cin >> inp;
	if (inp > 0) {
		cout << inp << " is absolute value.";		
	} else {
		cout << -(inp) << " is absolute value.";
	}
}
