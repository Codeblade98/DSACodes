#include<iostream>
using namespace std;

int subarrays_largest_sum(int* arr, int len)
{
    int lar = INT32_MIN;
    for(int i = 0; i < len; i++)
    {
        for(int j= i; j < len; j++)
        {
            int s = 0;
            for(int k = i; k <= j; k++)
            {
                s = s + arr[k];
            }
            if(s > lar)
            {
                lar = s;
            }
        }
    }
    return lar;
}

int main()
{
    int arr[] = {9, -12, 34, -100, 56, 0, -2, 5};
    int lar = subarrays_largest_sum(arr, sizeof(arr)/sizeof(int));
    cout << lar;
    return 0;
}

//Algorithm followed
//Similar to printing pairs except that another array is run to get the sum of all elements between them
//time complexity = n^3
