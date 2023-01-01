#include<iostream>
using namespace std;

void print_all_subarrays(int* arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j= i+1; j < len; j++)
        {
            cout << "[";
            for(int k = i; k <= j; k++)
            {
                cout << arr[k] << ", ";
            }
            cout << "\b\b]" << endl;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    print_all_subarrays(arr, sizeof(arr)/sizeof(int));
    return 0;
}

// Algorithm followed
// Similar to printing pairs except that another array is run to print all elements between them
