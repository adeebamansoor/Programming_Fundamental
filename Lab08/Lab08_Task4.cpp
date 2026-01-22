#include <iostream>
using namespace std;

int main() {
    int choice;
    double usd, convertedAmount;

    // Exchange rates 
    const double USD_TO_PKR = 280.0;
    const double USD_TO_INR = 83.0;
    const double USD_TO_EURO = 0.92;

    cout << "Currency Converter (From USD)\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to EURO\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice) {
        case 1:
            convertedAmount = usd * USD_TO_PKR;
            cout << "Amount in PKR = " << convertedAmount;
            break;

        case 2:
            convertedAmount = usd * USD_TO_INR;
            cout << "Amount in INR = " << convertedAmount;
            break;

        case 3:
            convertedAmount = usd * USD_TO_EURO;
            cout << "Amount in EURO = " << convertedAmount;
            break;

        default:
            cout << "Error: Invalid choice!";
    }

    return 0;
}

