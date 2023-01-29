//This program does not work as we require number of combinations but it gives number of permutations

#include<bits/stdc++.h>
using namespace std;

//denominations in terms for 3,5,10
int num_of_denominations(int n)
{
    if(n == 3 or n == 5 or n == 10)
    {
        return 1;
    }

    if(n < 3)
    {
        return 0;
    }

    int a = num_of_denominations(n - 3);

    if(a != -1)
    {
        if(n > 5)
        {
            a += num_of_denominations(n - 5);
        }
        
        if(n > 10)
        {
            a += num_of_denominations(n - 10);
        }

        return a;
    }
}

int main()
{
    cout << num_of_denominations(25) << endl;
    return 0;
}