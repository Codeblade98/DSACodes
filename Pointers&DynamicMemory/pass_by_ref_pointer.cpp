#include<iostream>
using namespace std;

void apply_tax(int* income)//Here '*' is used to denote a pointer variable
{
    *income = *income * 0.9;//here '*' is used as dereference operator
}

int main()
{
    int income = 1000000;
    cout << income << endl;
    apply_tax(&income);
    cout << income;
}