#include<iostream>
using namespace std;

int binary_search(int* a, int x, int low, int high)
{
    int mid = (high + low)/2;

    if(low > high)
        return -1;
    
    else if(x == a[mid])
        return(mid);
    
    else if(x > mid)
        binary_search(a, x, mid + 1, high);
    
    else    
        binary_search(a, x, low, mid - 1);
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    cout << binary_search(a,12,0,10) << endl;
    return 0;
}