#include <iostream>
using namespace std;
int main() 
{ 
int n;
int arr[n];
cout<<"Enter the limit of Array :"<<endl;
cin>>n;
cout<<"Enter the Numbers: "<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
//reversing array
cout<<"In Reverse Order"<<endl;
for(int i=n-1;i>=0;i--)

{
cout<<arr[i]<<endl;	
}
return 0;


}
