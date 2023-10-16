// Write a program that takes the obtained marks as input and calculates percentage based on the given marks and a total mark value. Using the percentage determine the grade according to the following criteria :
// Percentage >= 90 = A+
// Percentage >= 80 = A
// Percentage >= 70 = B
// Percentage >= 60 = C
// Percentage >= 50 = D
// Percentage < 50 = F
// The program should create a Grade object with the obtained marks and the determined grade. It should then convert the Grade Object to two basic types : an int for the marks and a string for the grade: int marks = StudentGrade;. Finally the program should display the Marks and Grades

#include <iostream>
#include <string>

using namespace std;

class Grade {
private:
    int marks;
    string grade;
public:
    Grade(int m) {
        marks = m;
        if (marks >= 90) {
            grade = "A+";
        }
        else if (marks >= 80) {
            grade = "A";
        }
        else if (marks >= 70) {
            grade = "B";
        }
        else if (marks >= 60) {
            grade = "C";
        }
        else if (marks >= 50) {
            grade = "D";
        }
        else {
            grade = "F";
        }
    }
    operator int() const {
        return marks;
    }
    operator string() const {
        return grade;
    }
};

int main() {
    int obtainedMarks, totalMarks;
    cout << "Enter Obtained Marks: ";
    cin >> obtainedMarks;
    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    double percentage = (double)obtainedMarks / totalMarks * 100;
    Grade studentGrade(percentage);

    int marks = studentGrade;
    string grade = studentGrade;

    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
