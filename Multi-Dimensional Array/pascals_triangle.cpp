#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int>> arr(n);
    arr[0] = vector<int>(1);
    arr[0][0] = 1;
    for(int i = 1; i < n; i++)
    {
        arr[i] = vector<int>(i + 1);
        for(int j = 0; j < i + 1; j++)
        {
            if(j == 0 or j == i)
                arr[i][j] = 1;
            
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    return arr;
}
 
int main()
{
    cout << "Enter rows: ";
    int n;
    cin >> n;
    vector<vector<int>> arr = printPascal(n);
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}