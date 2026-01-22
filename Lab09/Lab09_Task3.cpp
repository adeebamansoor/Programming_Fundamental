#include <iostream>
using namespace std;

int main() {
    int num = 0;

    while (num <= 0) {
        cout << "Enter a positive number: ";
        cin >> num;

        if (num <= 0) {
            cout << "Error! Please enter a positive number." << endl;
        }
    }

    cout << "You entered: " << num << endl;
    return 0;
}

