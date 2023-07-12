#include<bits/stdc++.h>
using namespace std;
int s = 0;

void printSubsets(string &inpt, string &otpt, int i, int j)
{  
    //Base case
    if(inpt[i] == '\0')
    {
        otpt[j] = '\0';
        cout << otpt << '\n';
        return;
    }

    //Recursive case
    //Including first character of inpt
    otpt[j] = inpt[i];
    printSubsets(inpt, otpt, i+1, j+1);//here we are not calling a subproblem but using i to reach the subproblem

    //Excluding first character of inpt
    printSubsets(inpt,otpt, i+1, j); //since j is not changed, the value at otpt[j] is overwritten while back call
}

int main()
{
    string s = "abc";
    string output = s;//This is done since string is a STL container, so needs to be initialized with the required number of elements
    //This could have been better done using a character array with an alloted space
    printSubsets(s, output, 0, 0);
    return 0;
}