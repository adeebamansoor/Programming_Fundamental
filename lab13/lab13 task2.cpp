#include <iostream>
using namespace std;
int main()
{
    int a=2;
    int* ptr=&a;
    
    *ptr=20;
    
    cout<<"Modified Value of a : "<<a<<endl;
    return 0;
   	
	
	
	
}
