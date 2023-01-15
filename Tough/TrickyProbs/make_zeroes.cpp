/*
PROBLEM STATEMENT
=================

Given a two-dimensional array, if any element within is zero, make its whole row and column zero.

*/

#include<bits/stdc++.h>
using namespace std;

/*
ALGORITHM
=========

1. FIRST STORE ALL THE ROW POSITIONS AND COLUMN POSITIONS OF ZEROES IN SEPARATE ARRAYS
2. ITERATE OVER COLUMNS : IF ROW NUMBER PRESEN*/

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    vector<int> r,c;
    int n = arr.size(), m = arr[0].size();
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                r.push_back(i); c.push_back(j);
            }
        }
    }
    
    for(auto x : r){ //auto is used to denote a complex data type
        for(int i=0; i<n; i++){
            arr[x][i] = 0;
        }
    }
    for(auto x : c){
        for(int i=0; i<n; i++){
            arr[i][x] = 0;
        }
    }
    
    return arr;
}