#include <iostream>
using namespace std;

int main() {
    int sub1, sub2, sub3;
    char grade1, grade2, grade3;
    int total;
    float percentage;

    cout << "Enter marks of Subject 1: ";
    cin >> sub1;

    cout << "Enter marks of Subject 2: ";
    cin >> sub2;

    cout << "Enter marks of Subject 3: ";
    cin >> sub3;

    // Grade for subject 1
  {
	  if (sub1 >= 90)
        grade1 = 'A';
    else if (sub1 >= 80)
        grade1 = 'B';
    else if (sub1 >= 70)
        grade1 = 'C';
    else if (sub1 >= 60)
        grade1 = 'D';
    else
        grade1 = 'F';}

    // Grade for subject 2
  {
	 if (sub2 >= 90)
        grade2 = 'A';
    else if (sub2 >= 80)
        grade2 = 'B';
    else if (sub2 >= 70)
        grade2 = 'C';
    else if (sub2 >= 60)
        grade2 = 'D';
    else
        grade2 = 'F';}

    // Grade for subject 3
    {
	if (sub3 >= 90)
        grade3 = 'A';
    else if (sub3 >= 80)
        grade3 = 'B';
    else if (sub3 >= 70)
        grade3 = 'C';
    else if (sub3 >= 60)
        grade3 = 'D';
    else
        grade3 = 'F';}

    cout << "\nGrade in Subject 1 = " << grade1;
    cout << "\nGrade in Subject 2 = " << grade2;
    cout << "\nGrade in Subject 3 = " << grade3;

    // Failure condition
    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
        cout << "\n\nFailed";
        return 0;
    }

    total = sub1 + sub2 + sub3;
    percentage = (total / 300.0) * 100;

    cout << "\n\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    // Scholarship conditions
    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270) {
        cout << "\nMerit Scholarship Eligible";
    }
    else if ((grade1 == 'A' || grade1 == 'B') &&
             (grade2 == 'A' || grade2 == 'B') &&
             (grade3 == 'A' || grade3 == 'B') &&
             total >= 240) {
        cout << "\nRegular Scholarship Eligible";
    }
    else {
        cout << "\nNo Scholarship";
    }

    return 0;
}

