#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> sort(vector<int>a)
{
    int flag = 0;
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a.size() - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                flag = 1; //this step helps optimize to reduce time complexity to O(n) when array is sorted initially
            }
        }
        if(flag == 0)
            break;
    }
    return a;
}
int main()
{
    vector<int> arr = {3,4,2,1,5,6,8,7,10,11,9,12};
    arr = sort(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}