#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    // your code goes here
    vector<vector<int>> aux(v.size());
    for(int i = 0; i < v.size(); i++)
    {
        aux[i] = vector<int>(v[i].size());
        for(int j = 0; j < v[i].size(); j++)
        {
            if(i > 0 && j > 0)
                aux[i][j] =v[i][j] + aux[i - 1][j] + aux[i][j-1] - aux[i-1][j-1];
            else if(i > 0 && j == 0)
                aux[i][j] = v[i][j] + aux[i-1][j];
            else if(j > 0 && i == 0)
                aux[i][j] = v[i][j] + aux[i][j-1];
            else
                aux[i][j] = v[i][j];
        }
    }
    int s;
    if(sr > 0 && sc > 0)
        s = aux[er][ec] - aux[sr - 1][ec] - aux[er][sc - 1] + aux[sr - 1][sc - 1];

    else if(sr > 0 && sc == 0) 
        s = aux[er][ec] - aux[sr][ec - 1] - aux[er - 1][sc;
    return s;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
    int sr = 0, sc = 0, er = 1, ec = 1;
    cout << sum(v,sr,sc,er,ec);
    return 0;
}