#include <iostream>
using namespace std;

int main() {
    int sum = 0, i = 1;

    while (i <= 5) {
        sum += i;
        i++;
    }

    cout << "Sum of first five natural numbers is: " << sum << endl;

    return 0;
}

