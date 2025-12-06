#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive.";
    }
    else if (num < 0) {
        cout << "The number is negative.";
    }
    else {
        cout << "The number is zero.";
    }

    return 0;
}

