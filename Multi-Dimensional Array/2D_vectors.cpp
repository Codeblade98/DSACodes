#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of rows : ";
    int rows;
    cin >> rows;
    vector<vector<int>> my_vector(rows);

    int column[rows];
    int col_index = 0;

    for(int i = 0; i < rows; i++)
    {
        cout << "Enter the number of columns for row " << i + 1 << " : ";
        cin >> column[col_index];
        my_vector[i] = vector<int>(column[col_index]);
        for(int j = 0; j < column[col_index]; j++)
        {
            cout << "Enter value for row " << i << " column " << column[col_index] << " : ";
            cin >> my_vector[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < my_vector[i].size(); j++)
        {
            cout << my_vector[i][j] << " ";
        }    
        cout << endl;
    }
    return 0;
}
