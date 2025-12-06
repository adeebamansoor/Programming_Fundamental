#include <iostream>
using namespace std;

int main() {
    double salary;
    int experience;

    cout << "Enter your Salary: $";
    cin >> salary;


    if (salary >= 25000) 
	{cout << "You are eligible for the loan." << endl;}
   
    else 
    
        { cout << "Enter your Work Experience (in years): ";
          cin >> experience;

       if (experience > 5 && salary < 25000) {
            cout << "You are eligible for the loan." << endl;
        }
        else {
            cout << "You are NOT eligible for the loan." << endl;
        }  
    }
    

    return 0;}

