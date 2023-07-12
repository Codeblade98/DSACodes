#include<bits/stdc++.h>
using namespace std;

void printBoard(int a[][20], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}

bool isSafe(int board[][20], int n, int x, int y)
{
    //Columns
    for(int k=0;k<x;k++)
    {
        if(board[k][y]==1)
        {
            return false;
        }
    }
    //The method done here for diagonals is much better than the method I thought of so use this

    //Left Diag 
    int i = x;
    int j = y;
    while(i>=0 and j>=0)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        i--; 
        j--;
    }

    //Right Diag
    i = x;
    j = y;
    while(i>=0 and j<n)
    {
        if(board[i][j]==1)
        {
            return false;
        }
        i--; 
        j++;
    }
    return true;
}


bool nQueen(int b[][20], int n, int i)
{
    if(i == n)
    {
        printBoard(b,n);
        return true;
    }

    for(int j = 0; j < n; j++)
    {
        if(isSafe(b,n,i,j))
        {
            b[i][j] = 1;
            bool success = nQueen(b,n,i+1);
            if(success)
            {
                return true;
            }
            b[i][j] = 0;//backtracking step -> if no safe position in next row then given position in previous row changed
        }
    }
    return false;
}

int main() 
{
    int board[20][20] = {0};
    int n;
    cout << "Enter the number of rows in chess board ";
    cin >> n;
    if(!(nQueen(board,n,0)))
    {
        cout << "No configuration possible";
    }
    return 0;
}
