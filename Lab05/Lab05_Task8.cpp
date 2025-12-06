#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char grade;
    int years;
    double basicSalary , bonus , gross , tax , net ;

    cout << "Enter Employee Grade (A/B/C): ";
    cin >> grade;
if (grade != 'A' && grade != 'a' &&
    grade != 'B' && grade != 'b' &&
    grade != 'C' && grade != 'c') 

{cout<<"Invalid Grade"<<endl;}

    cout << "Enter Years of Service: ";
    cin >> years;


    // BASIC SALARY
    if (grade == 'A' || grade == 'a')
       {basicSalary = 50000;}

    if (grade == 'B' || grade == 'b')
         {
		 basicSalary = 30000;}

    if (grade == 'C' || grade == 'c')
        {
		basicSalary = 20000;}

    
    //  BONUS CALCULATION 
   
    if (years >= 10)
       {
		 bonus = basicSalary * 0.10;}

    if (years >= 5 && years <= 9)
       {
		 bonus = basicSalary * 0.05;}

    if (years < 5)
       {
		bonus = 0;}

   
    //  GROSS SALARY
    
    gross = basicSalary + bonus;

    
    //  TAX DEDUCTION 
    if (gross > 40000)
       {
	 tax = gross * 0.20;}

    if (gross >= 30000 && gross <= 40000)
       {
		 tax = gross * 0.10;}

    if (gross < 30000)
        {
		tax = 0;}

   
    // NET SALARY
    
    net = gross - tax;

    // OUTPUT
    
    
    cout << fixed << setprecision(2);
    cout << "\nBasic Salary: $ " <<basicSalary;
    cout << "\nBonus: $ " <<bonus;
    cout << "\nGross Salary: $ " <<gross;
    cout << "\nTax Deducted: $ " <<tax;
    cout << "\nNet Salary: $ " <<net;

    return 0;
}

