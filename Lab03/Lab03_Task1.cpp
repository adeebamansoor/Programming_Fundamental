#include <iostream>
using namespace std;
int main()
{
	double x1 =2.5,y1 =3.5;
	double x2 =6.5,y2 =7.5;
	double squared_distance =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	cout<<"The squared distance between the points ("<<x1<<","<<y1<<") and ("<<x2<<
	"," <<y2<<") is: "<<squared_distance<<"\n";
	return 0;
}
