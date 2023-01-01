#include <iostream>
using namespace std;
int main()
{
    int num1[10]; // since not initialized, it has garbage values only
    int num2[10] = {1}; // since one position is initialized, all remaining elements are automatically
    //initialized with zero

    for(int i = 0; i < 10; i++)
        cout<<num1[i]<<' '; // prints garbage value
    cout<<endl;

    for(int i = 0; i < 10; i++)
        cout<<num2[i]<<' '; // prints 1 as initial element then all zeroes
    return 0;
}