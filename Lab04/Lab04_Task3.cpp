#include <iostream>
using namespace std;

int main(){
	
	double balance;
	
	bool loyal;
	
	cout<<"Enter your Account Balance: \n";
	
	cout<<"Are you a loyal customer? (1 for yes ,0 for no) \n";
	
	cin>>balance;
	
	cin>>loyal;
	
	string accountType=(balance<100)?"Low Balance ":(balance>=100&&balance<=500)?"Standard Account ":"Premium Account ";
	
	string offer=(balance>200&&loyal==1)?"Eligible for special offer":"Not eligible for special offer";
	
	cout<<"Account Type: "<<accountType << endl;
	
	cout<<"special Offer status: "<<offer << endl;
	
	return 0;}
