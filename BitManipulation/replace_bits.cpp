#include<bits/stdc++.h>
using namespace std;

void clear_range(int &n, int i, int j)
{
    int mask1 = -1 << i;
    int mask2 = pow(2,j) - 1;
    int mask = (mask1 | mask2);
    n = (n & mask);
}

void replace_bits(int &n, int m, int i, int j)
{
    clear_range(n,i,j);
    int mask = m << j;
    n = (n | mask);
}

int main()
{
    int n = 128;
    int m = 5;
    int i = 6;
    int j = 3;
    replace_bits(n,m,i,j);
    cout << n << endl;
    return 0;
}