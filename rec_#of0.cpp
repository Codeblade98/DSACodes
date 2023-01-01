#include<iostream>
using namespace std;

int numOfZeroes(int n)
{
    if(n < 10)
        return 0;
    
    if(n%10 == 0)
        return(1 + numOfZeroes(n/10));
    else    
        return(numOfZeroes(n/10));

}

int main()
{
    cout << numOfZeroes(100200);
    return(0);
}