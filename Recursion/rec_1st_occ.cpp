#include<bits/stdc++.h>
using namespace std;

int first_occur(int *arr, int n, int key)
{
        if(n == 0)
        {
            return -1;
        }

        if(arr[0] == key)
        {
            return 0;
        }
        int k = first_occur(++arr,n-1,key);
        
        if(k != -1)
        {
            return (1 + k);
        }
}

int main()
{
    int arr[] = {1,2,3,4,5,4,5,3,2,1};
    cout << first_occur(arr,10,7) << endl;
    return 0;
}