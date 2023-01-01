#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the path" << endl;
    char directions[1000] = {'\0'};
    cin.getline(directions,1000);
    int x = 0, y = 0;

    for(int i = 0; directions[i] ; i++)
    {
        if(directions[i] == 'N' or directions[i] == 'n')
            y++;
        if(directions[i] == 'E' or directions[i] == 'e')
            x++;
        if(directions[i] == 'S' or directions[i] == 's')
            y--;
        if(directions[i] == 'W' or directions[i] == 'w')
            x--;
    }
    
    if(y > 0)
        while(y-- > 0)
            cout << 'N';

    else
        while(y++ < 0)
            cout << 'S';
    
    if(x > 0)
        while(x-- > 0)
            cout << 'E';
    
    else
        while(x++ < 0)
            cout << 'W';
    
    return 0;
}