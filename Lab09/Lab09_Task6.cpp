#include <iostream>
using namespace std;

int main() {
    int mainChoice, itemChoice;
    char again;
    double quantity, bill = 0;

    do {
        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice) {

        // ---------------- BREAKFAST ----------------
        case 1:
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Enter item choice: ";
            cin >> itemChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (itemChoice == 1) bill += 40 * quantity;
            else if (itemChoice == 2) bill += 60 * quantity;
            else if (itemChoice == 3) bill += 150 * quantity;
            else if (itemChoice == 4) bill += 15 * quantity;
            else cout << "Invalid item!\n";
            break;

        // ---------------- LUNCH ----------------
        case 2:
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050 per KG)\n";
            cout << "2. Mutton Karahi (Rs.1800 per KG)\n";
            cout << "3. Egg Fried Rice (Rs.450 per plate)\n";
            cout << "4. BBQ (Rs.1050 per dozen)\n";
            cout << "Enter item choice: ";
            cin >> itemChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (itemChoice == 1) bill += 1050 * quantity;
            else if (itemChoice == 2) bill += 1800 * quantity;
            else if (itemChoice == 3) bill += 450 * quantity;
            else if (itemChoice == 4) bill += 1050 * quantity;
            else cout << "Invalid item!\n";
            break;

        // ---------------- DINNER ----------------
        case 3:
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050 per KG)\n";
            cout << "2. Mutton Karahi (Rs.1800 per KG)\n";
            cout << "3. Egg Fried Rice (Rs.450 per plate)\n";
            cout << "4. BBQ (Rs.1050 per dozen)\n";
            cout << "5. Saji (Rs.800 per KG)\n";
            cout << "Enter item choice: ";
            cin >> itemChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (itemChoice == 1) bill += 1050 * quantity;
            else if (itemChoice == 2) bill += 1800 * quantity;
            else if (itemChoice == 3) bill += 450 * quantity;
            else if (itemChoice == 4) bill += 1050 * quantity;
            else if (itemChoice == 5) bill += 800 * quantity;
            else cout << "Invalid item!\n";
            break;

        default:
            cout << "Invalid main menu choice!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n===== TOTAL BILL =====\n";
    cout << "Amount to Pay: Rs. " << bill << endl;
    cout << "Thank you for visiting!\n";

    return 0;
}

