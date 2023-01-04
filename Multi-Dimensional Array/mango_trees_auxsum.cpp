#include<bits/stdc++.h>
using namespace std;

int max_tree(char a[][100], int row, int col)
{
    int aux[row][col];
    aux[0][0] = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i != 0 && j != 0)
                if(a[i][j] == '#')
                    aux[i][j] = 1 + aux[i-1][j] + aux[i][j-1];
                else
                    aux[i][j] = aux[i-1][j] + aux[i][j-1];
        }
    }

    for(int i )
}