#include <iostream>
using namespace std;

int main() {
    int marks;
    string grade;

    cout << "Enter Marks (0_100): ";
    cin >> marks;

    if (marks >= 90)
        {
		grade = "A+";}

    if (marks >= 80 && marks <= 89)
       {
		 grade = "A";}

    if (marks >= 70 && marks <= 79)
        grade = "B";

    if (marks >= 60 && marks <= 69)
       {
		 grade = "C";}

    if (marks < 60)
        {
		grade = "Fail";}

    cout << "Grade: " << grade;

    return 0;
}

