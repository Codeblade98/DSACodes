#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of rows : ";
    int rows;
    cin >> rows;
    vector<vector<int>> my_vector(rows);

    for(int i = 0; i < rows; i++)
    {
        int col_num;
        cout << "Enter the number of columns for row " << i + 1 << " : ";
        cin >> col_num;
        my_vector[i] = vector<int>(col_num);
        for(int j = 0; j < col_num; j++)
        {
            cout << "Enter value for row " << i << " column " << col_num << " : ";
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
