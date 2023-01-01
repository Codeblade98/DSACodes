#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) //comparator function
{
    return a > b;
}
int main()
{
    int arr[] = {7,-1,3,5,78,45,678,-102};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
    for(int x : arr)
        cout << x << ',';
    sort(arr,arr + n, compare);//usage of comparator function
    cout << endl;
    for(int x : arr)
        cout << x << ',';
    return 0;
}