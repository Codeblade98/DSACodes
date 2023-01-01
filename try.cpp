#include<bits/stdc++.h>
using namespace std;

void count(int a)
{
    if(a == 1)
    {
        cout << 1;
        return;
    }
    count(a/2);
    cout << a%2;
}

int main()
{
    int a;
    cin >> a;
    count(a);
    return 0;
}