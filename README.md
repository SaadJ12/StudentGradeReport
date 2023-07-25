# Student Grade Management System

This repository contains a simple C++ program that allows users to manage student grades. The program enrolls students, records their marks, calculates their percentages, and assigns grades based on the percentage obtained. Users can update student information, sort the data based on percentages, and even delete student records.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Options](#options)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This C++ program provides an Admin Panel for managing student grades. The program allows users to enroll students, record their Computer Science and Maths marks, calculate their percentages, and assign grades based on the percentage obtained. Additionally, it provides various options for updating, sorting, and deleting student records.

## Getting Started

To use this program, follow these steps:

1. Clone the repository to your local machine.
2. Compile the `main.cpp` file using a C++ compiler (e.g., g++, Visual Studio, etc.).
3. Run the compiled executable to start the program.

## Usage

1. When you run the program, you will be greeted with the Admin Panel.

2. Enter the Roll Number, Computer Science marks, and Maths marks for each student you want to enroll. The program allows you to add multiple students in a loop.

3. After enrolling the students, the program will display their Roll Numbers, marks, percentages, and grades.

4. You can choose from several options to manage the student data:

   - Press 1 to update the Roll Number of a particular student.
   - Press 2 to update the Computer Science marks of a particular student.
   - Press 3 to update the Computer Science marks for all students.
   - Press 4 to update the Maths marks of a particular student.
   - Press 5 to update the Maths marks for all students.
   - Press 6 to sort the data based on percentages in ascending order.
   - Press 7 to delete the data of a particular student.

5. To exit the program, press any key and then close the console window.

## Options

1. **Update Roll Number of a particular student (Option 1):**
   - Enter the Roll Number of the student you want to update.
   - Enter the new Roll Number for the student.
   - The Roll Number will be updated, and the changes will be reflected in the student data.

2. **Update Computer Science marks of a particular student (Option 2):**
   - Enter the Roll Number of the student you want to update.
   - Enter the new Computer Science marks for the student.
   - The Computer Science marks will be updated, and the percentage and grade will be recalculated.

3. **Update Computer Science marks for all students (Option 3):**
   - Enter the new Computer Science marks for all students.
   - All students' Computer Science marks will be updated, and their percentages and grades will be recalculated.

4. **Update Maths marks of a particular student (Option 4):**
   - Enter the Roll Number of the student you want to update.
   - Enter the new Maths marks for the student.
   - The Maths marks will be updated, and the percentage and grade will be recalculated.

5. **Update Maths marks for all students (Option 5):**
   - Enter the new Maths marks for all students.
   - All students' Maths marks will be updated, and their percentages and grades will be recalculated.

6. **Sort the data according to percentages of students (Option 6):**
   - The student data will be sorted in ascending order based on their percentages.
   - The Roll Numbers, Computer Science marks, Maths marks, percentages, and grades will be displayed in the sorted order.

7. **Delete the data of a particular student (Option 7):**
   - Enter the Roll Number of the student whose data you want to delete.
   - If the Roll Number is found, the student's record will be deleted from the system.
   - If the Roll Number is not found, a message indicating the same will be displayed.

## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvement, feel free to create an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as per the terms of the license.