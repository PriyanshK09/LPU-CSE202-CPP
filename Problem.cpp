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
