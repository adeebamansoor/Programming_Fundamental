/******************************************************************
        LIBRARY MANAGEMENT SYSTEM
        Course  : Programming Fundamentals
        Semester: 1st
******************************************************************/

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

//====================== CONSTANTS ==========================//
const int MAX_BOOKS = 50;
const int FREE_DAYS = 5;
const int FINE_PER_DAY = 10;
const string PASSWORD = "admin";

//====================== GLOBAL VARIABLES ===================//
int bookID[MAX_BOOKS];
string bookName[MAX_BOOKS];
string bookCategory[MAX_BOOKS];
int totalQuantity[MAX_BOOKS];
int issuedQuantity[MAX_BOOKS];
int issueCount[MAX_BOOKS];

int studentRoll[MAX_BOOKS];
int issueDay[MAX_BOOKS], issueMonth[MAX_BOOKS], issueYear[MAX_BOOKS];
int returnDay[MAX_BOOKS], returnMonth[MAX_BOOKS], returnYear[MAX_BOOKS];

int totalBooks = 0;

//====================== FUNCTION PROTOTYPES ================//
void setColor(int);
void clearScreen();
int getValidatedNumber(string);

void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
void showPopularBooks();
void totalLibrarySummary();

//====================== MAIN FUNCTION ======================//
int main()
{
    string pass;

    setColor(11);
    cout << "\n--- LIBRARIAN LOGIN ---\n";
    setColor(7);

    while (true)
    {
        cout << "Enter Password: ";
        cin >> pass;

        if (pass == PASSWORD)
        {
            setColor(10);
            cout << "\nLogin Successful!\n";
            setColor(7);
            break;
        }
        else
        {
            setColor(12);
            cout << "Incorrect Password! Try again.\n";
            setColor(7);
        }
    }

    int choice;

    do
    {
        clearScreen();

        setColor(9);
        cout << "=============================================\n";
        cout << "           LIBRARY MANAGEMENT SYSTEM\n";
        cout << "=============================================\n";
        setColor(7);

        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. View Popular Books\n";
        cout << "7. Total Library Summary\n";
        cout << "0. Exit\n";

        choice = getValidatedNumber("\nEnter your choice: ");
        clearScreen();

        switch (choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: showPopularBooks(); break;
            case 7: totalLibrarySummary(); break;
            case 0:
                setColor(10);
                cout << "Program terminated successfully.\n";
                setColor(7);
                break;
            default:
                setColor(12);
                cout << "Invalid choice!\n";
                setColor(7);
        }

        if (choice != 0)
        {
            cout << "\nEnter any number to return to menu: ";
            int temp; cin >> temp;
        }

    } while (choice != 0);

    return 0;
}

//====================== FUNCTIONS ==========================//

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void clearScreen()
{
    system("cls");
}

//---------- INPUT VALIDATION ----------//
int getValidatedNumber(string prompt)
{
    string input;
    int number;

    while (true)
    {
        cout << prompt;
        cin >> input;

        bool valid = true;
        number = 0;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] < '0' || input[i] > '9')
            {
                valid = false;
                break;
            }
            number = number * 10 + (input[i] - '0');
        }

        if (valid)
            return number;
        else
            cout << "Invalid input! Numbers only.\n";
    }
}

//---------- ADD BOOK ----------//
void addBook()
{
    setColor(11);
    cout << "\n--- ADD NEW BOOK ---\n";
    setColor(7);

    bookID[totalBooks] = getValidatedNumber("Enter Book ID: ");
    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, bookName[totalBooks]);

    cout << "Enter Book Category: ";
    getline(cin, bookCategory[totalBooks]);

    totalQuantity[totalBooks] = getValidatedNumber("Enter Total Quantity: ");

    issuedQuantity[totalBooks] = 0;
    issueCount[totalBooks] = 0;
    studentRoll[totalBooks] = 0;

    issueDay[totalBooks] = issueMonth[totalBooks] = issueYear[totalBooks] = 0;
    returnDay[totalBooks] = returnMonth[totalBooks] = returnYear[totalBooks] = 0;

    totalBooks++;

    setColor(10);
    cout << "\nBook added successfully.\n";
    setColor(7);
}

//---------- DISPLAY BOOKS (TABLE FORM) ----------//
void displayBooks()
{
    setColor(14);
    cout << "\n--- LIBRARY BOOK RECORD ---\n";
    setColor(7);

    cout << "ID\tName\t\tCategory\tTotal\tIssued\tAvailable\tRoll\tIssue Date\tReturn Date\n";
    cout << "--------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < totalBooks; i++)
    {
        cout << bookID[i] << "\t";

        cout << bookName[i];
        if (bookName[i].length() < 8) cout << "\t\t";
        else cout << "\t";

        cout << bookCategory[i];
        if (bookCategory[i].length() < 8) cout << "\t\t";
        else cout << "\t";

        cout << totalQuantity[i] << "\t";
        cout << issuedQuantity[i] << "\t";
        cout << totalQuantity[i] - issuedQuantity[i] << "\t\t";

        if (studentRoll[i] == 0) cout << "-\t";
        else cout << studentRoll[i] << "\t";

        if (issueDay[i] == 0) cout << "-\t\t";
        else cout << issueDay[i] << "/" << issueMonth[i] << "/" << issueYear[i] << "\t";

        if (returnDay[i] == 0) cout << "-";
        else cout << returnDay[i] << "/" << returnMonth[i] << "/" << returnYear[i];

        cout << endl;
    }
}

//---------- SEARCH BOOK ----------//
void searchBook()
{
    int id = getValidatedNumber("Enter Book ID: ");

    for (int i = 0; i < totalBooks; i++)
    {
        if (bookID[i] == id)
        {
            setColor(10);
            cout << "\nBook Found!\n";
            setColor(7);
            cout << "Name: " << bookName[i] << endl;
            cout << "Category: " << bookCategory[i] << endl;
            cout << "Available: " << totalQuantity[i] - issuedQuantity[i] << endl;
            return;
        }
    }

    setColor(12);
    cout << "\nBook not found.\n";
    setColor(7);
}

//---------- ISSUE BOOK ----------//
void issueBook()
{
    int id = getValidatedNumber("Enter Book ID: ");

    for (int i = 0; i < totalBooks; i++)
    {
        if (bookID[i] == id)
        {
            if (issuedQuantity[i] < totalQuantity[i])
            {
                studentRoll[i] = getValidatedNumber("Enter Student Roll No: ");
                issueDay[i] = getValidatedNumber("Issue Day: ");
                issueMonth[i] = getValidatedNumber("Issue Month: ");
                issueYear[i] = getValidatedNumber("Issue Year: ");

                issuedQuantity[i]++;
                issueCount[i]++;

                setColor(10);
                cout << "\nBook issued successfully.\n";
                setColor(7);
            }
            else
            {
                cout << "\nBook not available.\n";
            }
            return;
        }
    }

    cout << "\nInvalid Book ID.\n";
}

//---------- RETURN BOOK ----------//
void returnBook()
{
    int id = getValidatedNumber("Enter Book ID: ");
    int lateDays = getValidatedNumber("Enter Late Days: ");

    int fine = 0;
    if (lateDays > FREE_DAYS)
        fine = (lateDays - FREE_DAYS) * FINE_PER_DAY;

    for (int i = 0; i < totalBooks; i++)
    {
        if (bookID[i] == id && issuedQuantity[i] > 0)
        {
            issuedQuantity[i]--;
            studentRoll[i] = 0;

            setColor(10);
            cout << "\nBook returned successfully.\n";
            cout << "Fine: Rs " << fine << endl;
            setColor(7);
            return;
        }
    }

    setColor(12);
    cout << "\nReturn failed.\n";
    setColor(7);
}

//---------- POPULAR BOOKS ----------//
void showPopularBooks()
{
    setColor(14);
    cout << "\n--- POPULAR BOOKS ---\n";
    setColor(7);

    for (int i = 0; i < totalBooks; i++)
    {
        cout << bookName[i] << " -> Issued " << issueCount[i] << " times";
        if (issueCount[i] >= 3) cout << " (Popular)";
        cout << endl;
    }
}

//---------- TOTAL LIBRARY SUMMARY ----------//
void totalLibrarySummary()
{
    int totalIssued = 0, totalAvailable = 0;

    for (int i = 0; i < totalBooks; i++)
    {
        totalIssued += issuedQuantity[i];
        totalAvailable += (totalQuantity[i] - issuedQuantity[i]);
    }

    cout << "\n--- TOTAL LIBRARY SUMMARY ---\n";
    cout << "Total Books: " << totalBooks << endl;
    cout << "Issued Books: " << totalIssued << endl;
    cout << "Available Books: " << totalAvailable << endl;
}

