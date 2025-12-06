#include <iostream>
using namespace std;

int main() {
    char signal;

    cout << "Enter Signal Color (R/G/Y): ";
    cin >> signal;
    if (signal != 'R' && signal != 'r' &&
    signal  != 'G' && signal  != 'g' &&
    signal  != 'Y' && signal != 'y') 
    {cout<<"Invalid Signal Colour."<<endl;
	}


   
    if (signal == 'R' || signal == 'r')
        {cout << "Stop";}

    if (signal == 'G' || signal == 'g')
        
		{cout << "Go";}

    if (signal == 'Y' || signal == 'y')
         
		{cout << "Slow Down";}

    return 0;
}

