#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, remainder, result = 0;
    
    
	cout << "Enter an integer: ";
	cin >> number;
	
    originalNumber = number;
    
    while (originalNumber != 0) {
    	remainder = originalNumber % 10;
    	result += remainder * remainder * remainder;
    	originalNumber /= 10;
	}
	
	
	if (result == number) {
		cout << number << " is an armstrong number.";
	} else {
		cout << number << " is not an armstrong number.";
	}
}
