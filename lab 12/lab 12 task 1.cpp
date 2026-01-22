#include <iostream>
#include <cmath>   // Required for math functions

using namespace std;

int main() {
    double num;  // To store user input

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> num;

    // Square Root
    double squareRoot = sqrt(num);  // sqrt() function
    cout << "Square Root: " << squareRoot << endl;

    // Absolute value
    double absoluteValue = fabs(num);  // fabs() for double, abs() for int
    cout << "Absolute Value: " << absoluteValue << endl;

    // Sine
    double sineValue = sin(num);  // sin() expects input in radians
    cout << "Sine: " << sineValue << endl;

    // Cosine
    double cosineValue = cos(num);  // cos() expects input in radians
    cout << "Cosine: " << cosineValue << endl;

    // Power of 3
    double powerValue = pow(num, 3);  // pow(base, exponent)
    cout << "Power of 3: " << powerValue << endl;

    return 0;
}

