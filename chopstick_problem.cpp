/* 
PROBLEM STATEMENT
=================

Chopsticks
------------
Given N sticks and an array length where each length[i] represents length of each stick. 
Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks 
is at most D. A stick can't be part of more than one pair of sticks.

Input Format
-------------

In the function an integer vector length and number D is passed.

Output Format
--------------

Return an integer representing total number of such pairs.
*/

/*
ALGORITHM
==========
1. First sort the array
2. Now calculate the difference between adjacent elements(This would be our best possible method to approach)
3. If difference is less than d, it is a possible pair
*/

#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int d)
{
    sort(length.begin(), length.end());
    int res = 0;

    for(int i = 0; i < length.size() - 1; i++)
    {
        if(length[i+1] - length[i] <= d)
        {
            res++;
            i++;
        }
    }
    return res;
}