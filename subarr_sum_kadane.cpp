#include<iostream>
using namespace std;

int subarrays_largest_sum(int* arr, int len)
{
    int sum = 0;
    int lar = 0;
    for(int i = 0; i < len; i++)
    {
        sum = sum + arr[i];
        lar = max(sum,lar);//we need to do this before next line to compute correct output if max_sum>0
        sum = sum < 0? 0 : sum;
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

//ALGORITHM
//1. Make two variables - current_sum and largest_sum
//2. If current_sum becomes less than zero at any point, make current sum = 0
//3. If current_sum > largest_sum, largestz_sum = current_sum

//Time complexity n