#include <iostream>
using namespace std;

main()
{
//	int a, b, c;
//	cout << "Enter the value of a: ";
//	cin >> a;
//	cout << "\nEnter the value of b: ";
//	cin >> b;
//	cout << "\nEnter the value of c: ";
//	cin >> c;
//	if (a > b && a > c) {
//		cout << a << " is greater than " << b << " and " << c;
//	} else if (b > a && b > c) {
//		cout << b << " is greater than " << a << " and " << b;
//	} else {
//		cout << c << " is greater than " << a << " and " << b;
//	}


//	int a, b, c;
//	cout << "Enter the value of a: ";
//	cin >> a;
//	cout << "\nEnter the value of b: ";
//	cin >> b;
//	cout << "\nEnter the value of c: ";
//	cin >> c;
//	
//	if (a > b && a > c) {
//		cout << a << " is greater than " << b << " and " << c;
//	} else {
//		if (b > a && b > c) {
//			cout << b << " is greater than " << a << " and " << b;
//		} else {
//			cout << c << " is greater than " << a << " and " << b;
//		}
//	}
	
//	float num1, num2, res;
//	float modRes;
//	string oper;
//	cout << "Enter the value of num1: ";
//	cin >> num1;
//	cout << "Enter the value of num2: ";
//	cin >> num2;
//	
//	
//		cout << "Choose the operator from the following:";
//		cout << "\nPress + to add the numbers: ";
//		cout << "\nPress - to subtract the numbers: ";
//		cout << "\nPress * to multiply the numbers: ";
//		cout << "\nPress / to divide the numbers: ";
//		cout << "\nPress % to find the reminder of the numbers: \n";
//		cin >> oper; 
//		if (oper == "+") {
//			res = num1 + num2;
//			cout << num1 << " + " << num2 << " = " << res;
//		} else if (oper == "-") {
//			res = num1 - num2;
//			cout << num1 << " - " << num2 << " = " << res;
//		} else if (oper == "*") {
//			res = num1 * num2;
//			cout << num1 << " * " << num2 << " = " << res;
//		} else if (oper == "/") {
//			if (num1 >= 0 && num2 != 0) {	
//				res = num1 / num2;
//				cout << num1 << " / " << num2 << " = " << res;
//			} else {
//				cout << "Invalid numbers.";
//			}
//			
//		} else if (oper == "%") {
//			if (num1 >= 0 && num2 != 0) {
//				modRes = static_cast<int>(num1)  % static_cast<int>(num2);
//				cout << num1 << " % " << num2 << " = " << modRes;
//			} else {
//				cout << "Invalid numbers.";
//			}
//		} 

//	cout << "*  *";
//	cout << "\n*  *";
//	cout << "\n****";
//	cout << "\n*  *";
//	cout << "\n*  *";

//	int side1, side2;
//	cout << "Enter the value of side 1: ";
//	cin >> side1;
//	cout << "Enter the value of side 2: ";
//	cin >> side2;
//	if (side1 > 0 && side2 > 0) {	
//		if (side1 == side2) {
//			cout << "Given sides are of square.";
//		} else {
//			cout << "Given sides are of a rectangle.";
//		}
//	} else {
//		cout << "Given values are incorrect.";
//	}
	
	
	
	float marks, gpa;
	
	cout << "Enter your obtained marks: ";
	cin >> marks;
	
	if (marks > 0 && marks <= 100) {
		if (marks >= 85) {
			gpa = 4.0;
		} else if (marks > 80) {
			gpa = 3.8;
		} else if (marks > 75) {
			gpa = 3.4;
		} else if (marks > 71) {
			gpa = 3.0;
		} else if (marks > 68) {
			gpa = 2.8;
		} else if (marks > 64) {
			gpa = 2.4;
		} else if (marks > 61) {
			gpa = 2.0;
		} else if (marks > 57) {
			gpa = 1.8;
		} else if (marks > 54) {
			gpa = 1.4;
		} else if (marks > 50) {
			gpa = 1.0;
		} else {
			gpa = 0;
		}
		
		gpa == 0 ? cout << "Failed" : cout << "GPA: " << gpa;
		
	} else {
		cout << "Wrong input.";
	}
	
	
	
}
