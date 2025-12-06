#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	string category=(age<13)?"child":(age>=13&&age<=19)?"Teenager":"Adult";
	cout<<"Age "<<age<<" falls under the category : "<<category;
	return 0;
}
