#include<bits/stdc++.h>
using namespace std;

void printarray(int a[][100], int row, int col)
{
    //Traversal is like
    /* 
       (start_row, c[0] to c[end])
       (end_col, r[1] to r[end])
       (end_row, c[end-1] to c[0])
       (start_col, r[end-1] to r[1])

       then go to inner spirals                     
    */

   int start_col = 0, start_row = 0;
   int end_col = col - 1, end_row = row - 1;
   while(start_row <= end_row and start_col <= end_col)
   {
    for(int c = start_col; c <= end_col; c++)
    {
        cout << a[start_row][c] << endl;
    }

    for(int r = start_row + 1; r <= end_row; r++)
    {
        cout << a[r][end_col] << endl;
    }

    for(int c = end_col - 1; c >= start_col; c--)
    {
        if(start_row != end_row)//important condition to avoid printing twice for some testcases
            cout << a[end_row][c] << endl;
    }

    for(int r = end_row - 1; r >= start_row + 1; r--)
    {
        if(start_col != end_col)//important condition to avoid printing twice for some testcases
            cout << a[r][start_col] << endl;
    }
    start_col++;
    start_row++;
    end_row--;
    end_col--;
   }
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

    printarray(a,4,5);
    return 0;
}