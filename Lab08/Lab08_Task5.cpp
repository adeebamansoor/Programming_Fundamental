#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int category = 0;
    int item = 0;
    int quantity = 0;
    double unitPrice = 0.0;
    double subtotal = 0.0;
    double discount = 0.0;
    double total = 0.0;

    // Show categories menu
    cout << "Welcome to the Shopping System\n";
    cout << "Select a category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice (1-3): ";
    cin >> category;

    // Category selection
    switch (category) {
        case 1: // Electronics
            cout << "\nElectronics Items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Enter item number (1-3): ";
            cin >> item;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch (item) {
                case 1: unitPrice = 1000.0; break;
                case 2: unitPrice = 700.0; break;
                case 3: unitPrice = 150.0; break;
                default:
                    cout << "Error: Invalid item choice!\n";
                    return 0; // exit early on invalid item
            }
            break;

        case 2: // Clothing
            cout << "\nClothing Items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Enter item number (1-3): ";
            cin >> item;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch (item) {
                case 1: unitPrice = 120.0; break;
                case 2: unitPrice = 40.0; break;
                case 3: unitPrice = 60.0; break;
                default:
                    cout << "Error: Invalid item choice!\n";
                    return 0;
            }
            break;

        case 3: // Groceries
            cout << "\nGroceries Items:\n";
            cout << "1. Milk (1 Liter) ($2)\n";
            cout << "2. Bread (1 Loaf) ($3)\n";
            cout << "3. Eggs (1 Dozen) ($5)\n";
            cout << "Enter item number (1-3): ";
            cin >> item;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch (item) {
                case 1: unitPrice = 2.0; break;
                case 2: unitPrice = 3.0; break;
                case 3: unitPrice = 5.0; break;
                default:
                    cout << "Error: Invalid item choice!\n";
                    return 0;
            }
            break;

        default:
            cout << "Error: Invalid category choice!\n";
            return 0;
    }

    // Compute subtotal
    subtotal = unitPrice * quantity;

    // Determine discount
    if (subtotal < 100.0) {
        discount = 0.0;
    } else if (subtotal <= 500.0) {
        discount = 0.10 * subtotal;  // 10%
    } else {
        discount = 0.20 * subtotal;  // 20%
    }

    // Final total
    total = subtotal - discount;

    // Print invoice
    cout << fixed << setprecision(2); // format numbers to 2 decimals
    cout << "\n----- Invoice -----\n";
    cout << "Category: ";
    if (category == 1) cout << "Electronics\n";
    else if (category == 2) cout << "Clothing\n";
    else if (category == 3) cout << "Groceries\n";

    cout << "Item: ";
    // identify item name
    if (category == 1) {
        if (item == 1) cout << "Laptop\n";
        else if (item == 2) cout << "Smartphone\n";
        else if (item == 3) cout << "Headphones\n";
    } else if (category == 2) {
        if (item == 1) cout << "Jacket\n";
        else if (item == 2) cout << "T-shirt\n";
        else if (item == 3) cout << "Jeans\n";
    } else { // category == 3
        if (item == 1) cout << "Milk\n";
        else if (item == 2) cout << "Bread\n";
        else if (item == 3) cout << "Eggs\n";
    }

    cout << "Quantity: " << quantity << "\n";
    cout << "Unit Price: $" << unitPrice << "\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "Discount: $" << discount << "\n";
    cout << "Total Payable: $" << total << "\n";
    cout << "--------------------\n";

    return 0;
}

