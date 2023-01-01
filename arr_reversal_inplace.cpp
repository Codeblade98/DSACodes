#include<iostream>
using namespace std;

void swap(int* a, int* b) //optional as swap function already exist in c++
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Algorithm
// Traverse from both start and end upto middle and swap elements
void reverse_arr(int* arr, int len)
{
    for(int i = 0; i <= len/2 ; i++)
    {
        swap(&arr[i],&arr[len - 1 - i]); 
    }
}

int main()
{
    cout << "Enter the length of the array ";
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i <= len-1; i++)
    {
        cout << "Enter the value for index " << i << ' ';
        cin >> arr[i];
    }
    reverse_arr(arr, len);
    for(int i = 0; i <= len-1; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}