#include<bits/stdc++.h>
using namespace std;

int gridWays(int m, int n, int i, int j)
{
    if(i == m-1 or j == n-1)// this is because m-1 'move-right' and n-1 'move-up' required, so ways = (m-n-2)!/(m-1)!(n-1)!
    {
        return 1;
    }

    if(i >= m and j >= n)
    {
        return 0;
    }

    return(gridWays(m,n,i+1,j) + gridWays(m,n,i,j+1));
}

int main()
{
    int m,n;
    cin >> m;
    cin >> n;
    cout << gridWays(m,n,0,0);
    return 0;
}