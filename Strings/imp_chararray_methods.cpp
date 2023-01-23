#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000] = "Agnij Biswas";
    char b[1000];
    
    //finding length of string stored : strlen function
    //                                  ------
    cout << "Length of string a is " << strlen(a) << endl;

    //copying a string : strcpy function
    //                   ------
    strcpy(b,a); // for strcpy(s1,s2) means s2 ----> s1
    cout << "The string b is " << b << endl;

    //concatenating two strings : strcat function
    //                            ------
    strcpy(b, strcat(b,"abcde"));
    cout << "b is modified to " << b << endl;

    //comparing two strings : strcmp function
    //                        ------
    cout << "Comparing equal strings " << strcmp(a,a) << endl;//will always give 0
    cout << "Comparing unequal strings " << strcmp(a,b) << endl;//will give a non-zero number

    //sorting the characters of a string : (process similar to sorting vectors)

    

    //study more about working of strcmp from web
    return 0;
}