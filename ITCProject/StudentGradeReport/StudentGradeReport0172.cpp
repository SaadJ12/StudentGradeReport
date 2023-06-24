#include <iostream>
using namespace std;
int main() {
	int computer, maths, roll;
	char decision;
	bool flag = true;
	cout << "Welcome to Admin Panel" << endl;
	cout << "Enter Roll Numbers and their data to enroll students" << endl;

	while(flag) {
		cout << "Enter Roll Number of student 1: ";
		cin >> roll;
		cout << "Enter Marks of Computer Science of student 1 within 100: ";
		cin >> computer;
		cout << "Enter Marks of Maths of student 1 within 100: ";
		cin >> maths;
		cout << "Enter Y / y if you continue adding students and their data and N/n to stop: ";
		cin >> decision;
		if (decision == 'Y' || decision == 'y') {
			flag = true;
		}
		else {
			flag = false;
		}
	}
	return 0;
}
