#include<iostream>
using namespace std;

void apply_tax(int &income)//since we use reference to the value of the parameter, it does not create a copy
{
    income = income * 0.9;//applying 10% tax;
}

int main()
{
    int income = 1000000;
    cout << income << endl;
    apply_tax(income);
    cout << income;
}