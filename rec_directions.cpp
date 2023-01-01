#include<iostream>
using namespace std;

void inc(int n)//away from base case
{
    if(n == 0)
        return;
    inc(n-1);
    cout << n << ' ';//printing after calling
}

void dec(int n)//towards base case
{
    if(n == 0)
        return;
    cout << n << ' ';//printing before calling
    dec(n-1);
}

int main()
{
    inc(10);
    cout << endl;
    dec(10);
}