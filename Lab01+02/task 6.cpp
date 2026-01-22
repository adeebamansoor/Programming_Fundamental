#include <iostream>
using namespace std;
int main()
{
	string username="admin";
	string role;
	string password="password123";
	string username1, password1;
	 cout<<"ENter user name: ";
	 cin>>username1;
	 cout<<"Enter password: "<<endl;
	 cin>>password1;
	  if(username1==username && password1=password)
	  {
	  	cout<<"Authentication successful!"<<endl;
	  	cout<<"Who are you?\nAdmin\nGuest\nAnyother\nEnter your role:"<<endl;
	  	cin>>role;
	  	if(role=="admin" || role=="admin")
	  	cout<<"full access"<<endl;
	  	else if( role == "Guest" || role=="guest")
	  	cout<<"limited access"<<endl;
	  	else if(role=="Anyother" || role=="anyother")
	  	cout<<"no access"<<endl;
	  }
	  else
	  {
	  	cout<<"Authentication failed access denied."<<endl;
	  }
	
	
	
	
	
	
	return 0;
}
