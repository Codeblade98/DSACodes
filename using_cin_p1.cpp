#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int len1 = 0, len2 = 0;
    cout << "Enter the sentence terminated by EOL character" << endl;
    char temp;
    
    do
    {
        temp = cin.get();
        cout << temp;
        len1 ++;
    }while(temp != '\n');
    
    cout << "Input of " << len1 << " characters accepted and printed" << endl;
    //cin.get() creates an input buffer which stores characters until it gets an end of line character
    //then it proceeds to the next line of code and eventually deletes the input buffer

    cout << endl << "Enter the sentence to be terminated by #" << endl;
    
    do
    {
        temp = cin.get();
        cout << temp;
        len2++;
    } while(temp != '#');//we also get # in output. To not get it we must use while loop
    
    cout << "Input of " << len2 << " characters accepted and printed" << endl;
    //prints the value stored in the input buffer until encounter \n
    //exits out of loop once # encountered

    //cin.get() accepts the sentence and stores each character in the input buffer and evaluates only after encountering EOL
    return 0;
}