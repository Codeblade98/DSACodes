#include<bits/stdc++.h>
using namespace std;

int last_occur(int *arr, int n, int key)
{
    if(n == 0)
    {
        return -1;
    }

    int k = last_occur(++arr,n-1,key);
    

    if(k != -1)
    {
      return(k + 1);  
    }

    if(arr[0] == key)
    {
        return 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,4,5,3,2,1};
    cout << last_occur(arr,10,5) << endl;
    return 0;
}