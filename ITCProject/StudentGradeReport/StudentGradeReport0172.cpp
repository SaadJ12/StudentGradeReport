#include <iostream>
using namespace std;

int main() {
    int computer[1000], maths[1000], roll[1000], studentNumber = 0, options, checkRoll, update;
    float marks[1000], percentage[1000], greatest[1000];
    char decision;
    char grading[1000];
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
            grading[studentNumber - 1] = 'A';
       }
      else if (percentage[studentNumber - 1] >= 75 && percentage[studentNumber - 1] <= 90) {
            grading[studentNumber - 1] = 'B';
        }
      else if (percentage[studentNumber - 1] >= 60 && percentage[studentNumber - 1] < 75) {
            grading[studentNumber - 1] = 'C';
      }
      else if (percentage[studentNumber - 1] >= 50 && percentage[studentNumber - 1] < 60) {
            grading[studentNumber - 1] = 'D';
        }
      else if (percentage[studentNumber - 1] >= 0 && percentage[studentNumber - 1] < 50) {
            grading[studentNumber - 1] = 'F';
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
        cout << "Grade of student " << (i + 1) << " is: " << grading[i] << endl;
        cout << endl;
    }
    cout << "Press 1 to update Roll Number of a particular Student." << endl;
    cout << "Press 2 to update Marks of Computer Science of a particular Student." << endl;
    cout << "Press 3 to update Marks of Computer Science for all Students." << endl;
    cout << "Press 4 to update Marks of Maths of a particular Student." << endl;
    cout << "Press 5 to update Marks of Maths for all Students." << endl;
    cout << "Press 6 to sort the data according to Percentages of a students." << endl;
    cin >> options;
    if (options == 1) {
        cout << "Enter the roll of a Student: ";
        cin >> checkRoll;
        for (int i = 0; i < studentNumber; i++) {
        if (checkRoll == roll[i]) {
        cout << "Enter the new Roll Number of a Student: ";
        cin >> update;
        roll[i] = update;
        cout << "Roll Number has been updated to: " << roll[i] << endl;
            }
        }
    }
    else if (options == 2) {
        cout << "Enter the roll of a Student: ";
        cin >> checkRoll;
        for (int i = 0; i < studentNumber; i++) {
            if (checkRoll == roll[i]) {
        cout << "Enter the new Computer marks of a Student: ";
        cin >> update;
        computer[i] = update;
        cout << "Marks are updated to: " << computer[i] << endl;
        marks[i] = computer[i] + maths[i];
        percentage[i] = (marks[i] / 200)  * 100;
        if (percentage[i] >= 91 && percentage[i] <= 100) {
        grading[i] = 'A';
        }
        else if (percentage[i] >= 75 && percentage[i] <= 90) {
        grading[i] = 'B';
        }
        else if (percentage[i] >= 60 && percentage[i] < 75) {
        grading[i] = 'C';
        }
        else if (percentage[i] >= 50 && percentage[i] < 60) {
        grading[i] = 'D';
        }
        else if (percentage[i] >= 0 && percentage[i] < 50) {
        grading[i] = 'F';
        }
        cout << "Grades of students " << (i + 1) << " is: " << grading[i] << endl;
            }
        }
    }
    else if (options == 3) {
        cout << "Enter the new CS marks for all Students: ";
        cin >> update;
        for (int i = 0; i < studentNumber; i++) {
        computer[i] = update;
        cout << "Marks are updated to: " << computer[i] << endl;
        marks[i] = computer[i] + maths[i];
        percentage[i] = (marks[i] / 200) * 100;
        if (percentage[i] >= 91 && percentage[i] <= 100) {
            grading[i] = 'A';
        }
        else if (percentage[i] >= 75 && percentage[i] <= 90) {
            grading[i] = 'B';
        }
        else if (percentage[i] >= 60 && percentage[i] < 75) {
            grading[i] = 'C';
        }
        else if (percentage[i] >= 50 && percentage[i] < 60) {
            grading[i] = 'D';
        }
        else if (percentage[i] >= 0 && percentage[i] < 50) {
            grading[i] = 'F';
        }
        cout << "Grades of students " << (i + 1) << " is: " << grading[i] << endl;
        }
    }
    else if (options == 4) {
        cout << "Enter the roll of a Student: ";
        cin >> checkRoll;
        for (int i = 0; i < studentNumber; i++) {
        if (checkRoll == roll[i]) {
        cout << "Enter the new Maths marks of a Student: ";
        cin >> update;
        maths[i] = update;
         cout << "Marks are updated to: " << maths[i] << endl;
         marks[i] = computer[i] + maths[i];
         percentage[i] = (marks[i] / 200) * 100;
        if (percentage[i] >= 91 && percentage[i] <= 100) {
            grading[i] = 'A';
        }
        else if (percentage[i] >= 75 && percentage[i] <= 90) {
        grading[i] = 'B';
        }
        else if (percentage[i] >= 60 && percentage[i] < 75) {
        grading[i] = 'C';
        }
        else if (percentage[i] >= 50 && percentage[i] < 60) {
        grading[i] = 'D';
        }
        else if (percentage[i] >= 0 && percentage[i] < 50) {
        grading[i] = 'F';
        }
        cout << "Grades of students " << (i + 1) << " is: " << grading[i] << endl;
        }
        }
    }
    else if (options == 5) {
        cout << "Enter the new Maths marks for all Students: ";
        cin >> update;
        for (int i = 0; i < studentNumber; i++) {
            maths[i] = update;
            cout << "Marks are updated to: " << maths[i] << endl;
            marks[i] = computer[i] + maths[i];
            percentage[i] = (marks[i] / 200) * 100;
            if (percentage[i] >= 91 && percentage[i] <= 100) {
                grading[i] = 'A';
            }
            else if (percentage[i] >= 75 && percentage[i] <= 90) {
                grading[i] = 'B';
            }
            else if (percentage[i] >= 60 && percentage[i] < 75) {
                grading[i] = 'C';
            }
            else if (percentage[i] >= 50 && percentage[i] < 60) {
                grading[i] = 'D';
            }
            else if (percentage[i] >= 0 && percentage[i] < 50) {
                grading[i] = 'F';
            }
            cout << "Grades of students " << (i + 1) << " is: " << grading[i] << endl;
        }
    }
        if (options == 6) {
        for (int i = 0; i < studentNumber - 1; i++) {
        for (int j = 0; j < studentNumber - i - 1; j++) {
        if (percentage[j] > percentage[j + 1]) {
        float tempPercentage = percentage[j];
        percentage[j] = percentage[j + 1];
        percentage[j + 1] = tempPercentage;

        int tempRoll = roll[j];
        roll[j] = roll[j + 1];
        roll[j + 1] = tempRoll;

        int tempComputer = computer[j];
        computer[j] = computer[j + 1];
        computer[j + 1] = tempComputer;

        int tempMaths = maths[j];
        maths[j] = maths[j + 1];
        maths[j + 1] = tempMaths;

        char tempGrading = grading[j];
        grading[j] = grading[j + 1];
        grading[j + 1] = tempGrading;
                    }
                }
            }
            cout << "Data sorted based on percentages in ascending order:" << endl;
            for (int i = 0; i < studentNumber; i++) {
                cout << "Roll Number of student " << (i + 1) << " is: " << roll[i] << endl;
                cout << "Marks of Computer Science of student " << (i + 1) << " is: " << computer[i] << endl;
                cout << "Marks of Maths of student " << (i + 1) << " is: " << maths[i] << endl;
                cout << "Percentage of student " << (i + 1) << " is: " << percentage[i] << endl;
                cout << "Grade of student " << (i + 1) << " is: " << grading[i] << endl;
                cout << endl;
            }
        }

        


    system("pause");
    return 0;
}
