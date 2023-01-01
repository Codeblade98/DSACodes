#include<iostream>
using namespace std;

bool isSorted(int* arr, int n)
{
    //base case
    if(n == 0 || n == 1)
        return true;
    
    //recursive case
    if(arr[0] < arr[1] && isSorted(arr+1, n-1))//we can use arr+1 as it is called as a pointer
        return true;

    return false;
}

int main()
{
    int arr[] = {2, 34, 5678, 8910, 11121, 141516};
    if(isSorted(arr, 6))
        cout << "Sorted";
    
    else
        cout << "Unsorted";
    
    return 0;
    
}