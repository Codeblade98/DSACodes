#include<iostream>

using namespace std;

int fibo(int n)
{
    //base case 1
    if(n == 1)
        return 0;
    
    //base case 2
    else if(n == 2)
        return 1;

    //recursive case
    else
        return(fibo(n-1)+fibo(n-2));
}

int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    cout << fibo(n);
    return 0;
}
