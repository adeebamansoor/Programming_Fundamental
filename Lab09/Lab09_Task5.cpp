#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;   // Default balance
    double amount;

    while (true) {
        cout << "\n===== Simple Banking System =====" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Deposit
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful!" << endl;
            } else {
                cout << "Invalid amount!" << endl;
            }

        } else if (choice == 2) {
            // Withdraw
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful!" << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                cout << "Invalid amount!" << endl;
            }

        } else if (choice == 3) {
            // Check Balance
            cout << "Current Balance: $" << balance << endl;

        } else if (choice == 4) {
            // Exit
            cout << "Thank you for using the banking system!" << endl;
            break;

        } else {
            // Invalid choice
            cout << "Invalid choice! Please select between 1 and 4." << endl;
        }
    }

    return 0;
}

