#include<bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }

    int k = power(a,n/2);
    k = k * k;

    if(n % 2 == 0)
    {
        return k;
    }
    else
    {
        return a * k;
    }
}

int main()
{
    cout << power(2,5) << endl;
    return 0;
}

