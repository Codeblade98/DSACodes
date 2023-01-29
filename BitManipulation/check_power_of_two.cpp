#include<bits/stdc++.h>
using namespace std;

bool check_powOfTwo(int n)
{
    return(!(n&(n-1)));
}

int main()
{
    int n = 1024;
    if(check_powOfTwo(n))
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}