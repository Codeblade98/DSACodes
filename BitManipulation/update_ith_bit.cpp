#include<bits/stdc++.h>
using namespace std;

int setIthBit(int &n, int i)//changes ith bit to 1
{
    //Algorithm we apply here is that we need to or with a binary number with all zeroes and one at thae ith position
    //Let us say we have 9 => 1001 and we want to set 2nd bit so we | with 0100

    int mask = (1 << i);//we get the masking number by left shifting 1 by i bits
    return (n | mask);
}

int clearIthBit(int &n, int i)//changes ith bit to 1
{
    //Algorithm we apply here is that we need to or with a binary number with all ones and zero at thae ith position
    //Let us say we have 9 => 1001 and we want to set 3rd bit so we & with 0111

    int mask = ~(1 << i);//we get the masking number by left shifting 1 by i bits and then taking its complement
    return (n & mask);
}

int updateIthBit1(int &n, int i, int v)
{
    clearIthBit(n,i);
    int mask = v << i;
    return (n | mask);
}

int main()
{
    int n, i, v;
    cout << "Enter the number, bit position and updated bit respectively : ";
    cin >> n;
    cin >> i;
    cin >> v;
    cout << updateIthBit1(n,i,v) << endl;
    return 0;
}