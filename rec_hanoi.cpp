#include<iostream>
using namespace std;

void hanoi(int n, char initial, char last, char mid)
{
    if(n == 1)
    {
        cout << "TRANSFER FROM " << initial << " TO " << last << endl;
        return;
    }

    hanoi(n - 1, initial, mid, last);
    cout << "TRANSFER FROM " << initial << " TO " << last << endl;
    hanoi(n-1, mid, last, initial);
}

int main()
{
    hanoi(4, 'A', 'C', 'B');
    return 0;
}