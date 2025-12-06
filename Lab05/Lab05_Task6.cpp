#include <iostream>

using namespace std;

int main(){
	
	double balance;
	
	double withdrawlAmount;
	
	cout<<"Enter your Account Balance: "<< endl;
	
	cin >> balance;
	
	cout<<"Withdrawl Amount : "<<endl;
	
	cin >>withdrawlAmount;
	
	double remainingBalance =balance-withdrawlAmount;
	
	if(withdrawlAmount<=balance){
		
		cout<<"Remaining Balance= "<<remainingBalance<<endl;}
		
		else 
			{
			cout<<"Insufficient Balance"<<endl;}
	
		
	}
	


		

