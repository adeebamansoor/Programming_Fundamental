#include <iostream>
using namespace std;

int main() {
    int *ptr = 0;   // pointer initialized to nullptr

    if (ptr == 0) {
        cout << "Pointer is NULL and does not point to any valid memory.";
    } else {
        cout << "Pointer holds address: " << ptr;
    }

    return 0;
}

