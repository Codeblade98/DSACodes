#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000] = "Agnij Biswas";
    char b[1000];
    
    //finding length of string stored : strlen function
    cout << "Length of string a is " << strlen(a) << endl;

    //copying a string : strcpy function
    strcpy(b,a);
    cout << "The string b is " << b << endl;

    //concatenating two strings : strcat
    strcpy(b, strcat(b,"abcde"));
    cout << "b is modified to " << b << endl;

    //comparing two strings
    cout << "Comparing equal strings " << strcmp(a,a) << endl;//will always give 0
    cout << "Comparing unequal strings " << strcmp(a,b) << endl;//will give a non-zero number

    //study more about working of strcmp from web
    return 0;
}