#include <iostream>
using namespace std;
int main()
{
	double Item1=12.95,Item2=24.95,Item3=6.95,Item4=14.95,Item5=3.95;
    const double TAX_RATE =0.06;// constant for sales tax rate 
    double subtotal  =Item1 +Item2 +Item3 +Item4 +Item5;
	double salestax =subtotal * TAX_RATE;
	double total =subtotal + salestax;
	
	cout <<"Price of item 1 : $ "<<Item1<<"\n";
	cout <<"Price of item 2 : $"<<Item2<<"\n";
	cout <<"Price of item 3 : $"<<Item3<<"\n";
	cout <<"Price of item 4 : $"<<Item4<<"\n";
	cout <<"Price of item 5 : $"<<Item5<<"\n";
	cout <<"Subtotal: $"<<subtotal <<"\n";
	cout <<"Salestax (6%): $" <<salestax<<"\n";
	cout <<"Total : $" <<total<<"\n";
	return 0;
}
