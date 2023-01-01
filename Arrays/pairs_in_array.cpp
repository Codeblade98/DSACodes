#include<iostream>
using namespace std;

void print_all_pairs(int* arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            cout << arr[i] << ", "  << arr[j] << endl;
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    print_all_pairs(arr, sizeof(arr)/sizeof(int));
}