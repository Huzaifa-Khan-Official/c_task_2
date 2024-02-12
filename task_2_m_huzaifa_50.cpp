#include <iostream>
using namespace std;

main() {
	float num_of_classes, num_of_class_attend;
	float per_of_attendance;
	cout << "Number of classes held: ";
	cin >> num_of_classes;
	cout << "\nNumber of classes attended: ";
	cin >> num_of_class_attend;
	
	per_of_attendance = (num_of_class_attend / num_of_classes) * 100;
	if (per_of_attendance > 75) {
		cout << "Percentage of class attended: " << per_of_attendance << "%";
		cout << "\nYou are allowed to sit in exam.";
	} else {
		cout << "Percentage of class attended: " << per_of_attendance << "%";
		cout << "\nYou are not allowed to sit in exam.";
	}
}
