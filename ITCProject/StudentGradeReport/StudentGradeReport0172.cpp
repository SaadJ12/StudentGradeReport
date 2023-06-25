#include <iostream>
using namespace std;
int main() {
	int computer, maths, roll, studentNumber = 1;
	char decision;
	bool flag = true;
	cout << "Welcome to Admin Panel" << endl;
	cout << "Enter Roll Numbers and their data to enroll students" << endl;

	while(flag) {
		int student[4];
		cout << "Enter Roll Number of student " << studentNumber << ": ";
		cin >> roll;
		cout << "Enter Marks of Computer Science of student 1 within 100: ";
		cin >> computer;
		while (computer > 100) {
		cout << "Enter Marks of Computer Science of student 1 within 100: ";
		cin >> computer;
		}
		
		cout << "Enter Marks of Maths of student 1 within 100: ";
		cin >> maths;
		while (maths > 100) {
			cout << "Enter Marks of Maths of student 1 within 100: ";
			cin >> maths;
		}
		
		cout << "Enter Y / y if you continue adding students and their data and N/n to stop: ";
		cin >> decision;
		if (decision == 'Y' || decision == 'y') {
			flag = true;
			studentNumber++;
		}
		else {
			studentNumber = student[0];
			roll = student[1];
			computer = student[2];
			maths = student[3];
			flag = false;
		}
		cout << "Roll Number of student" << student[0] << "is" << student[1];
		cout << "Marks of Computer Science of " << student[0] << "is" << student[2];
		cout << "Marks of Maths of " << student[0] << "is" << student[3];
	}
	system("pause");
	return 0;
}
