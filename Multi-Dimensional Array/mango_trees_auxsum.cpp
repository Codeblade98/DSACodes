#include<bits/stdc++.h>
using namespace std;

int max_tree(char a[][100], int row, int col)
{
    int aux[row][col];
    aux[0][0] = 0;
    aux[1][0] = 0;
    aux[0][1] = 0;
    for(int i = 1; i < row; i++)
    {
        for(int j = 1; j < col; j++)
        {
            if(i != 0 && j != 0)
                if(a[i][j] == '#')
                    aux[i][j] = 1 + aux[i-1][j] + aux[i][j-1] - aux[i-1][j-1];
                else
                    aux[i][j] = aux[i-1][j] + aux[i][j-1] - aux[i-1][j-1];
        }
    }

    int max = 0;
    pair<int,int> pos = {0,0};
    for(int i = 1; i < row - 1; i++)
    {
        for(int j = 1; j < col - 1; j++)
        {
            int t1 = aux[i][j];
            int t2 = aux[row - 1][j] - aux[i][j];
            int t3 = aux[i][col - 1] - aux[i][j];
            int t4 = aux[row - 1][col - 1] - t1 - t2 - t3;
            int min1 = min(t1, t2);
            int min2 = min(t3, t4);
            int min3 = min(min1, min2);
            if(min3 > max)
            {
                pos = {i,j};
                max = min3;
            }
        }
    }
    cout << pos.first + 1 << ',' << pos.second + 1 << endl;
    //we do +1 as we need the index of the column before which cut is made not after which cut is made
    return max;
}

int main()
{
    char a[][100] = 
    {
        {".##..."},
        {"#..##."},
        {".#...."},
        {".##..#"},
        {"#..##."},
        {".#...."}
    };

    int max = max_tree(a,6,6);
    cout << max;
    return 0;
}