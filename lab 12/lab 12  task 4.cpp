#include <iostream>
using namespace std;

// Function to calculate factorial
 int  factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply all numbers from 1 to n
    }
    return fact;  // Return the factorial
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
    } else {
        long long result = factorial(num);  // Call the function
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}

