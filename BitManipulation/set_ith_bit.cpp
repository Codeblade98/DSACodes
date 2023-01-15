#include<bits/stdc++.h>
using namespace std;

int setIthBit(int &n, int i)//changes ith bit to 1
{
    //Algorithm we apply here is that we need to or with a binary number with all zeroes and one at thae ith position
    //Let us say we have 9 => 1001 and we want to set 2nd bit so we | with 0100

    int mask = (1 << i);//we get the masking number by left shifting 1 by i bits
    return (n | mask);
}

int main()
{
    int n,i;
    cout << "Enter the number and bit position ";
    cin >> n;
    cin >> i;
    cout << setIthBit(n,i);
    return 0;
}

//concept to remember
//& with 1 and | with 0 does not change a bit
//& with 0 changes a bit to 0
//| with 1 changes a bit to 1