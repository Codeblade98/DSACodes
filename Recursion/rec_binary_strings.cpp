#include <bits/stdc++.h>
using namespace std;

vector<string> v;//using global variable

void helper(string str,int n,int i)//str is a null string which is required ti be passes
{
    if(i==n)
    {
        v.push_back(str);//putting string in the string array when string formation completed
        return;
    }
    string s1= str;
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
    for(int i = 0; i < v.size(); i++)
    {
        cout << v1[i] << '\t';

        if(i == v.size()/3)
        {
            cout << '\n';
        }
    }
    return 0;
}