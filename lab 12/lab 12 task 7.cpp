#include <iostream>
#include <iomanip>  // For setting precision
using namespace std;

// Function prototypes
void displayMenu();
double calculateItemCost(double price, int quantity);
double calculateFinalBill(double subtotal, double taxRate);

int main() {
    // Food items and prices
    const int NUM_ITEMS = 5;
    string foodItems[NUM_ITEMS] = {"Burger", "Pizza", "Pasta", "Sandwich", "Soft Drink"};
    double prices[NUM_ITEMS] = {150.0, 250.0, 200.0, 100.0, 50.0};

    int choice, quantity;
    double subtotal = 0.0;
    const double TAX_RATE = 0.10; // 10% tax/service charge

    cout << fixed << setprecision(2); // Display 2 decimal points for money

    do {
        displayMenu();
        cout << "Enter your choice (1-5) or 0 to finish: ";
        cin >> choice;

        if (choice >= 1 && choice <= NUM_ITEMS) {
            cout << "Enter quantity for " << foodItems[choice - 1] << ": ";
            cin >> quantity;

            // Add cost of selected item to subtotal
            subtotal += calculateItemCost(prices[choice - 1], quantity);

            cout << quantity << " x " << foodItems[choice - 1]
                 << " added to your order. Current subtotal: Rs " << subtotal << endl;
        }
        else if (choice == 0) {
            // Exit ordering loop
            break;
        }
        else {
            cout << "Invalid choice! Please select 1-" << NUM_ITEMS << " or 0 to finish." << endl;
        }

    } while (true);

    // Calculate and display final bill
    double totalBill = calculateFinalBill(subtotal, TAX_RATE);
    cout << "\n===== Final Bill =====\n";
    cout << "Subtotal: Rs " << subtotal << endl;
    cout << "Service Charge (10%): Rs " << subtotal * TAX_RATE << endl;
    cout << "Total Amount: Rs " << totalBill << endl;
    cout << "Thank you for dining with us!\n";

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n===== Restaurant Menu =====\n";
    cout << "1. Burger      - Rs 150.00\n";
    cout << "2. Pizza       - Rs 250.00\n";
    cout << "3. Pasta       - Rs 200.00\n";
    cout << "4. Sandwich    - Rs 100.00\n";
    cout << "5. Soft Drink  - Rs 50.00\n";
    cout << "0. Finish Order\n";
}

// Function to calculate cost of an item
double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax/service charge
double calculateFinalBill(double subtotal, double taxRate) {
    return subtotal + (subtotal * taxRate);
}

