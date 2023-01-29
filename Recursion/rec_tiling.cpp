#include<bits/stdc++.h>
using namespace std;

int tiles(int n, int m)
{
    //we have a n x m floor and we need to cover it with m x 1 tiles
    if(n < m)
    {
        return 1;
    }

    return (tiles(n-1, m) + tiles(n - m, m));
}

int main()
{
    cout << "Input m and n: ";
    int m,n;
    cin >> m >> n;
    cout << tiles(n,m);
    return 0;
}