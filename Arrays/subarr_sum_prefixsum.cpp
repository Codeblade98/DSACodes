#include<iostream>
#include<limits>
using namespace std;

int subarrays_largest_sum(int arr[], int len)
{
    int prefix[len];
    prefix[0] = arr[0];
    for(int i = 1; i < len; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    int lar = INT32_MIN; 
    for(int i = 0; i < len; i++)
    {
        for(int j= i; j < len; j++)
        {
            int s = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
            lar = max(lar,s);
        }
    }
    return lar;
}
int main()
{
    int arr[] = {-2, -9, -12, -4, -3, -89, -1};
    int lar = subarrays_largest_sum(arr, sizeof(arr)/sizeof(int));
    cout << lar;
    return 0;
}
//Algorithm
//Create an array of prefix sum or cumulative sums named prefix
//Sum of Subarray(between i & j) = prefix[j] - prefix[i-1](if i != 0) or preix[j](if i = 0)
//Check for larger value
//Time complexity = n^2 