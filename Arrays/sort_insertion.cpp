#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> a)
{
    for(int i = 1; i < a.size(); i++)
    {
        int current = a[i];
        int prev = i - 1;
        while(prev >= 0 && a[prev] >= current)//do not forget '>=' as required if same element twice
        {
            a[prev + 1] = a[prev];
            prev--; 
        }
        a[prev + 1] =  current;        
    }
    // {4,2,3,1,5} --> {4,4,3,1,5} --> {2,4,3,1,5} --> {2,4,4,1,5} --> {2,3,4,1,5} --> {2,3,4,4,5} --
    // -> {2,3,3,4,5} --> {2,2,3,4,5} --> {1,2,3,4,5}
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