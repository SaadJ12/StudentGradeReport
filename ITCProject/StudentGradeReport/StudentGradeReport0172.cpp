#include <iostream>
using namespace std;

int main() {
    int computer[1000], maths[1000], roll[1000], studentNumber = 0, options, checkRoll, updateRoll;
    float marks[1000], percentage[1000];
    char decision, grading;
    bool flag = true;

    cout << "Welcome to Admin Panel" << endl;
    cout << "Enter Roll Numbers and their data to enroll students" << endl;

    while (flag) {
      studentNumber++;

      cout << "Enter Roll Number of student " << studentNumber << ": ";
      cin >> roll[studentNumber - 1];
      cout << "Enter Marks of Computer Science of student " << studentNumber << " within 100: ";
      cin >> computer[studentNumber - 1];
      while (computer[studentNumber - 1] > 100) {
      cout << "Enter Marks of Computer Science of student " << studentNumber << " within 100: ";
      cin >> computer[studentNumber - 1];
      }

      cout << "Enter Marks of Maths of student " << studentNumber << " within 100: ";
      cin >> maths[studentNumber - 1];
      while (maths[studentNumber - 1] > 100) {
      cout << "Enter Marks of Maths of student " << studentNumber << " within 100: ";
      cin >> maths[studentNumber - 1];
      }

      marks[studentNumber - 1] = computer[studentNumber - 1] + maths[studentNumber - 1];
      percentage[studentNumber - 1] = marks[studentNumber - 1] / 2;

      if (percentage[studentNumber - 1] >= 91 && percentage[studentNumber - 1] <= 100) {
            grading = 'A';
       }
      else if (percentage[studentNumber - 1] >= 75 && percentage[studentNumber - 1] <= 90) {
            grading = 'B';
        }
      else if (percentage[studentNumber - 1] >= 60 && percentage[studentNumber - 1] < 75) {
            grading = 'C';
      }
      else if (percentage[studentNumber - 1] >= 50 && percentage[studentNumber - 1] < 60) {
            grading = 'D';
        }
      else if (percentage[studentNumber - 1] >= 0 && percentage[studentNumber - 1] < 50) {
            grading = 'F';
       }

        cout << "Enter Y/y if you continue adding students and their data and N/n to stop: ";
        cin >> decision;

        if (decision == 'Y' || decision == 'y') {
            flag = true;
        }
        else {
            flag = false;
        }
    }

    cout << endl << "Student Data:" << endl;
    for (int i = 0; i < studentNumber; i++) {
        cout << "Roll Number of student " << (i + 1) << " is: " << roll[i] << endl;
        cout << "Marks of Computer Science of student " << (i + 1) << " is: " << computer[i] << endl;
        cout << "Marks of Maths of student " << (i + 1) << " is: " << maths[i] << endl;
        cout << "Percentage of student " << (i + 1) << " is: " << percentage[i] << endl;
        cout << "Grade of student " << (i + 1) << " is: " << grading << endl;
        cout << endl;
    }
    cout << "Press 1 to update Roll Number of a particular Student.";
    cin >> options;
    if (options == 1) {
        cout << "Enter the roll of a Student: ";
        cin >> checkRoll;
        for (int i = 0; i < studentNumber; i++) {
            if (checkRoll == roll[i]){
                cout << "Enter the new Roll Number of a Student: ";
                cin >> updateRoll;
                roll[i] = updateRoll;
                cout << "Roll Number has been updated to: " << roll[i] << endl;
            }
        }
    }
    system("pause");
    return 0;
}
