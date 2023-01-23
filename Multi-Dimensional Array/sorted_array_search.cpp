//We need to search for an element in a 2D array sorted both row wise and column wise
//The most brute-force algorithm might be to search one by one and find the required element
//Then using the information about the sorting of the array we can perform row wise or column wise binary search
//But this method would be most optimal if only one of all rows or all columns were sorted
//Since the array is sorted both row wise and column wise we can think of a better algorithm

/*
STAIRCASE ALGORITHM
--------------------
1. Start from a corner except [0][0] and [row-1][column-1]
2. Compare with key and move up/down/left/right accordingly
*/

#include<bits/stdc++.h>
using namespace std;

pair<int,int> staircase_search(int a[][100], int row, int col, int n)
{
    pair<int,int> pos(0,col-1);
    while(pos.first < row and pos.second > 0)
    {
        if(n < a[pos.first][pos.second])
            pos.second --;
        else if(n > a[pos.first][pos.second])
            pos.first ++;
        else
        {
            cout << "Element " << n << " found at row " << pos.first + 1 << " column " << pos.second + 1 << endl;
            return pos;
        }
    }
    cout << "Element not found " << endl;
    return make_pair(-1,-1);
}

int main()
{
    int a[][100] = 
    {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20}
    };
    pair<int,int> pos = staircase_search(a,4,5,2);
    return 0;
}