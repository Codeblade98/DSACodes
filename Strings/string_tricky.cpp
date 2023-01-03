#include<iostream>
#include<cstring>
using namespace std;
//This program accepts some strings and prints the largest

int main()
{
    int n;
    cout << "Enter the number of input strings " << endl;
    cin >> n;

    //important portion of the question
    cin.get(); // if we don't do this then on pressing enter after inputting n will be accepted as a EOL string
    
    char a[1000];
    char b[1000];
    while(n-- > 0)
    {
        cout << "Enter the strings " << endl;
        cin.getline(a,1000);
        if(strlen(a) > strlen(b))
            strcpy(b,a);
    }
    cout << "The largest string entered is " << b;
    return 0;
}