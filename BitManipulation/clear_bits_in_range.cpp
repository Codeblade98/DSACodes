#include<bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n, int i, int j)
{
    //We need to clear all bits from i to j
    int l = max(i,j);
    int r = min(i,j);
    //cout << l << endl << r << endl;
    int mask1 = ~0 << l;
    //cout << mask1 << endl;
    int mask2 = pow(2,r) - 1;
    //cout << mask2 << endl;
    int mask = (mask1 | mask2);
    //cout << mask << endl;
    n = (n & mask);
}

int main()
{
    cout << "Enter n, i and j: ";
    int n,i,j;
    cin >> n;
    cin.get();
    cin >> i;
    cin.get();
    cin >> j;
    clearBitsInRange(n,i,j);
    cout << n;
    return 0;
}