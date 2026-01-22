#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "*   ";
        }
        cout << endl;
    }

    return 0;
}

