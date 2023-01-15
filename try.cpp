#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1, pair<int,int>p2)
{
    int a = p1.second;
    int b = p2.second;
    return a < b;    
}

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    position.push_back(make_pair(0,0));
    position.push_back(make_pair(H,W));
    
    int num_of_tower = position.size();
    vector<pair<int, int>> pos1;
    pos1 = position;
    sort(position.begin(), position.end());
    sort(pos1.begin(), pos1.end(), compare);
    
    int penalty = 0;
    for(int i = 0, j = 0; ;)
    {
        int row_diff;
        if(i <= num_of_tower - 1)
            row_diff = position[i + 1].first - position[i].first;
            
        int col_diff;
        if(j <= num_of_tower - 1)
            col_diff = position[j + 1].second - position[j].second;
        int unguarded;
        
        if(row_diff ==0)
            i++;
            
        if(col_diff == 0)
            j++;
            
        if(row_diff != 0 && col_diff !=0)
            {
                unguarded = row_diff * col_diff;
                penalty = max(penalty, unguarded);
                i++;
                j++;
            }
            
        if(i >= num_of_tower - 1 && j >= num_of_tower - 1)
            break;
    }
    
    return penalty;
}

int main()
{
    vector<pair<int,int>> v = {{3,8}, {11,2}, {8,6}, {0,0}, {8,15}};
    int n = defkin(15,8,v);
    cout << n;
    return 0;
}