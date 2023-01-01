#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int>a)
{
    for(int i = 0; i < a.size() - 1 ; i++)
    //we only need to run upto n-1 as if n-1 elements arew in their proper postion then nth element must be iin its position
    //n = number of elements in the array
    {
        int min_pos = i;
        int min = a[i];
        for(int j = i; j < a.size(); j++)
        {
            if(a[j] < min)
            {
                min_pos = j;
                min = a[j];
            }
        }
        swap(a[min_pos],a[i]);
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
