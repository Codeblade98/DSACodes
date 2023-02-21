#include <bits/stdc++.h>
using namespace std;

vector<string> v;//using global variable

/*
First we construct a string 0000....n times
Then the code return to where str = 0000.....(n-1) times, to which we concatenate a 1
Then str = 000....(n-2) times, we comcatenate 1 and again concatenate 0 at end in the next call
This proceeds accordingly and we get the strings
*/

void helper(string str,int n,int i)//str is a null string which is required ti be passes
{
    if(i==n)
    {
        v.push_back(str);//putting string in the string array when string formation completed
        return;
    }
    string s1= str;//makes a string s1 of n(initial value of n) 0s
    s1.push_back('0');
    helper(s1,n,i+1);

    if(i>0 && str[i-1]=='0')
    {
       str.push_back('1'); 
       helper(str,n,i+1);
    }
    else if(i==0)
    {
        str.push_back('1');
        helper(str,n,i+1);
    }

    return;
}

vector<string> binaryStrings(int n)
{
    v.clear();
    string str;
    helper(str,n,0);
    return v;

}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<string> v1 = binaryStrings(n);
    cout << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v1[i] << '\t';
    }
    return 0;
}