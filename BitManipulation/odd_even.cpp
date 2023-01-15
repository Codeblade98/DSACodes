#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin >> x;
    if(x & 1) // Odd numbers have binary representations ending with 1
    //Doing & with 1 gives us the last bit
        cout << "Odd";

    else 
        cout << "Even";

    return 0;
}