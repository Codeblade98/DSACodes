#include<bits/stdc++.h>
using namespace std;

int clearIthBit(int &n, int i)//changes ith bit to 1
{
    //Algorithm we apply here is that we need to or with a binary number with all ones and zero at thae ith position
    //Let us say we have 9 => 1001 and we want to set 3rd bit so we & with 0111

    int mask = ~(1 << i);//we get the masking number by left shifting 1 by i bits and then taking its complement
    return (n & mask);
}

int main()
{
    int n,i;
    cout << "Enter the number and bit position ";
    cin >> n;
    cin >> i;
    cout << clearIthBit(n,i);
    return 0;
}