#include<iostream>
using namespace std;

int binary_search(int* arr, int len, int key)
{
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {
        int mid = (start + end)/2;
        if(arr[mid] == key)
        {
            cout << "The element is found at index " << mid << endl;
            return -1;
        } 
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not present in array" << endl;
}
int main()
{
    int arr[] = {1, 6, 14, 25, 48, 50, 78, 96, 124};
    int key;
    cout << "Enter the number to be searched ";
    cin >> key;
    binary_search(arr, sizeof(arr)/sizeof(int), key);
}