#include<bits/stdc++.h>
using namespace std;

void clearLastIBits(int &n, int i)
{
    int mask = -1 << i;
    n = (n & mask);
}

int main()
{
    cout << "Enter the value of n and i respectively: ";
    int n,i;
    cin >> n;
    cin.get();
    cin >> i;
    clearLastIBits(n,i);
    cout << n;
    return 0; 
}