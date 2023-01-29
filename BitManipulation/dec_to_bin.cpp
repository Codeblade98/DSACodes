#include<bits/stdc++.h>
using namespace std;

int dec_to_bin(int n)
{
    int ans = 0;
    int power = 1;
    while(n > 0)
    {
        int last_bit = n & 1;
        ans = ans + power * last_bit;
        power = power * 10;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    cout << dec_to_bin(127) << endl;
    return 0;
}