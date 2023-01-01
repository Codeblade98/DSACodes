#include<iostream>
using namespace std;

void printArray(int arr[])//since we get a reference we can give int* arr as parameter
{
    cout << "in printArray method " << sizeof(arr) << endl; //this would print 4
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout << "in main method " << sizeof(arr) << endl; //this would print 24
    printArray(arr);
    return 0;
}

//there is a discrepancy between the sizeof() results as in function we only have the refernce to the array
//the reference is as a pointer variable
//therefore in functions sizeof() gives wrong results to our query
//now since the array is passed by reference, they have common memory location
