#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Agnij Biswas";
    string s2,s3;
    cout << "Enter a string " << endl;
    getline(cin,s2);
    cout << "The input is ' " << s2 << " ' " << endl;
    cout << "Enter a string terminated by #" << endl;
    getline(cin,s3,'#');
    cout << "The input is ' " << s3 << " ' " << endl;

    //accepting n space separated input
    int n;
    cout << "Enter the number of input : ";
    cin >> n;
    cout << "Enter " << n << " space separated strings" << endl;
    vector<string> words(0);
    string s;
    while(n-- > 1)
    {
        getline(cin,s,' ');
        words.push_back(s);
    }
    getline(cin,s);
    words.push_back(s);
    //we do this as the last word would not be ended by a space but by an EOL character

    for(string s : words)
        cout << s << endl;
    
    return 0;
}