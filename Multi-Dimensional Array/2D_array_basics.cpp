#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//NOTE:
//=====================================================================================
//While passing a 2D array in a function passing number of rows is optional but passing number of columns
//is compulsory


int main()
{
    int arr[100][100];
    cout << "Enter the number of rows and coulumns as m,n" << endl;
    int rows, columns;
    cin >> rows;
    cin.get();  
    cin >> columns;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "Enter for row " << i << " and coulmn " << j << " ";
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

