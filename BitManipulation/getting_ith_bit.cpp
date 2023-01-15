#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n , int i)
{
    //Algorithm we use here is that we can do &1 to get last bit
    //Then we shift the number using >> i times to get the ith bit at the last position
    //Here we have taken that i starts from 0

    //METHOD-2
    //We can also use masking
    //We make a number with all zeroes but 1 at ith position
    //If we do n&mask, we would get the ith bit

    n = n >> i;
    return n & 1;
}

int main()
{
    int n,i;
    cout << "Enter the number and bit position ";
    cin >> n;
    cin >> i;
    cout << getIthBit(n,i);
    return 0;
}