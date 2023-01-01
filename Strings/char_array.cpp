#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char b[] = "abcde";//stored as {'a', 'b', 'c', 'd', 'e', '\0'} 

    cout << a << endl << b << endl;
    cout << endl << "Length using strlen is " << strlen(b) << endl;//gives number of characters excluding \0
    cout << endl << "Length using sizeof is " << sizeof(b) << endl;//gives number of characters including \0

    //we can also take input directly using cin for character arrays
    //but this only works if there is no space character present in the  string

    //for example
    char c[20];
    char d[20];
    cout << endl << "Enter AgnijBiswas as name.\nEnter name ";
    cin >> c;
    cout << endl << "Enter Agnij Biswas as name.\nEnter name ";//only Agnij is accepted as input
    cin >> d;
    cout << c << endl << d;

    //we need to use cin.get() for proper input
    
    return 0; 
}