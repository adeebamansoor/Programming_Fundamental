#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int* ptr=arr;
     cout << "Array elements using pointer:" << endl;
      for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;

}
