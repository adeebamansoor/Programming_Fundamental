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
cout<<endl;
}
int largest=arr[0];
for (int i=1;i<n;i++)
{ 
if(arr[i]>largest)
{
	largest=arr[i];
	
	
}
}
cout<<"Largest Number is " <<largest;

return 0;

}
