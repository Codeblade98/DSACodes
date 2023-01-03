#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cout << "Enter the string : ";
    getline(cin,a);
    
    //sorting all characters of a string(similiar to vectors)
    string b = a;
    sort(b.begin(),b.end());
    cout << "The string " << a << " becomes " << b << endl;

    //accessing a character(similar to arrays)
    char ch = a[0];
    cout << ch;
    return 0;
}