#include<iostream>
using namespace std;

void rev(int n)
{
    if(n < 10)
    {
        cout << n;
        return;
    }
    
    cout << n%10;//needs to be done before recursive calling
    rev(n/10);
}
int main()
{
    rev(725);   
}