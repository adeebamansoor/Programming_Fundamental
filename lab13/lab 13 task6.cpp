#include <iostream>
using namespace std;

int main() {
    int x = 25;          // integer variable
    void *ptr;           // void pointer

    ptr = &x;            // store address of integer variable

    // Type casting before dereferencing
    cout << "Value of x using void pointer: " << *(int*)ptr;

    return 0;
}

