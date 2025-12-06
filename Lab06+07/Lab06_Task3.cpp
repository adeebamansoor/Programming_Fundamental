#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    string password;

    // Ask user for input
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    // Check conditions
    if (username == "admin" && password == "12345") {
        cout << "Access Granted.";
    }
    else if (username == "admin" && password != "12345") {
        cout << "Wrong Password.";
    }
    else {
        cout << "User Not Found.";
    }

    return 0;
}

