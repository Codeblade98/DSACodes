#include<bits/stdc++.h>
using namespace std;

int count_bits(int n)
{
    int count = 0;
    while(n > 0)
    {
        int last_bit = (n & 1);
        count += last_bit;
        n = n >> 1;
    }
    return count;
}

int count_bits_m2(int n)//better method
{
    int count = 0;
    while(n > 0)
    {
        n = n & (n - 1);//This removes the last set bit, i.e., removes the last 1 in the binary representation
        count ++;
    }
    return count;
}

int main()
{
    int n = 50;
    cout << count_bits(n) << endl;
    cout << count_bits_m2(n) << endl;
    return 0;
}