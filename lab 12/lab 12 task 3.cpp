#include <iostream>
using namespace std;

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

int main() {
    // Call the function with different numbers
    checkEvenOdd(5);
    checkEvenOdd(10);
    checkEvenOdd(23);
    checkEvenOdd(44);
    
    return 0;
}

