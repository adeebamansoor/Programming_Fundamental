#include <iostream>
using namespace std;

int main() {
    int choice;
    float area, radius, length, width, base, height;

    // Menu for user
    cout << "Select a shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Switch statement
    switch (choice) {
        case 1:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area;
            break;

        default:
            cout << "Error: Invalid choice! Please select 1, 2, or 3.";
    }

    return 0;
}

