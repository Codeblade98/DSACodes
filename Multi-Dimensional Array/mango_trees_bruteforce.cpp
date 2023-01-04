#include<bits/stdc++.h>
using namespace std;

int min_trees(char a[][100], int x, int y, int row, int col)
{
    int count[4] = {0};

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(a[i][j] == '#')
                count[0] ++;
        }
    }

    for(int i = y; i < row; i++)
    {
        for(int j = 0; j < x; j++)
        {
            if(a[i][j] == '#')
                count[1] ++;
        }
    }

    for(int i = 0; i < y; i++)
    {
        for(int j = x; j < col; j++)
        {
            if(a[i][j] == '#')
                count[2] ++;
        }
    }

    for(int i = y; i < row; i++)
    {
        for(int j = x; j < col; j++)
        {
            if(a[i][j] == '#')
                count[3] ++;
        }
    }

    int min1 = min(count[0], count[1]);
    int min2 = min(count[2], count[3]);
    return min(min1, min2);
}

pair<int,int> cut_coord(char a[][100], int row, int col)
{
    int max = INT32_MIN;
    pair<int,int> pos(0,0);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            int x = min_trees(a,i,j,row,col);
            if(x > max)
            {
                max = x;
                pos = make_pair(i,j);
            }
        }
    }
    cout << max << endl;
    return pos;
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

    pair<int,int> pos = cut_coord(a,6,6);
    cout << pos.first << ',' << pos.second << endl;;
    return 0;
}