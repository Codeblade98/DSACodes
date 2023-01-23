 #include<bits/stdc++.h>
 using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
{
    int len = intervals.size();
    int flag1 = 0;

    if(len == 0)
    {
        intervals.insert(intervals.begin(), newInterval);
    }

    if(len == 1)//this is required as if we erase the only character in the vector, memory is deallocated
    {
        intervals.push_back({INT32_MAX,INT32_MAX});
        flag1 = 1;
    }

    int i = 0, pos = 0;
    while(pos < len)
    {
        if(intervals[i][0] < newInterval[0] && intervals[i][1] < newInterval[0])
        {
            i++;
            pos++;
        }

        else if(intervals[i][0] > newInterval[1] && intervals[i][1] > newInterval[1])
        {
            i++;
            pos++;
        }

        else
        {
            int k = intervals[i][0];
            bool flag = 1;
            while(flag)
            {
                if(intervals[i][1] > newInterval[1])
                {
                    if(intervals[i][0] > newInterval[1])
                    {
                        intervals.insert(intervals.begin() + i, {k,newInterval[1]});
                        i++;
                        flag = 0;
                    }

                    else
                    {
                        int u = intervals[i][1];
                        intervals.erase(intervals.begin() + i);
                        intervals.insert(intervals.begin() + i , {k,u});
                        i++;
                        flag = 0;
                    }
                }
                pos++;
                if(!(flag))
                    break;
                intervals.erase(intervals.begin() + i);
            }
        }
        
    }   
    return intervals;      
}

int main()
{
    vector<vector<int>> s = {{1,3},{6,9}};
    vector<int> t = {2,5};
    vector<vector<int>> o = insert(s,t);
    for(int i = 0; i < o.size(); i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << o[i][j] << ',';
        }
        cout << "\b \n";
    }
}