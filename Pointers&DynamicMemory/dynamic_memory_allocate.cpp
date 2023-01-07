#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int *arr = new int[n];
    //arr is a static pointer variable
    //new is used for allocating memory on runtime
    //dynamically allocated memory stays until it is deleted manually through code

    //DELETING
    delete[] arr;

    return 0;
}