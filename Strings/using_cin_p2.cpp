#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char sentence[100] = {'\0'};
    cout << "Enter a sentence " << endl;
    char temp = cin.get();
    int pos = 0;
    while(temp != '\n')
    {
        sentence[pos++] = temp;
        temp = cin.get();
    }
    cout << sentence << endl;
    return 0;
}