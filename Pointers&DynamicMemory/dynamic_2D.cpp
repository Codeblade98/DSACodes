#include<bits/stdc++.h>
using namespace std;

int** createArray(int rows, int columns)
{//we can return an array declared inside function due to dynamic memory allocation as memory not deleted after function
    int** arr = new int*[rows]; //array of pointers

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];// This works as all elements of arr are pointers
    }

    return arr;
}
int main()
{
    int** arr = createArray(4,4);
    return 0;
}