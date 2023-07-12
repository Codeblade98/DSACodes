#include<bits/stdc++.h>
using namespace std;
int p = 0;
void permutations(string input, string &output, int i)
{
    //Base case : If only one character in input string, append it to the output and print it 
    if(input.length() == 1)
    {
        output[i] = input[0];
        output = output + '\0';
        cout << output << endl;
        p++;
        return;
    }

    //Recursive case
    int n = input.length();
    string input1 = input.substr(1);
    output = output + " ";
    output[i] = input[0];//Putting first character(which is fixed) -> outside loop as for original first character fixed
    permutations(input1, output,i+1);
    for(int j = 1; j < n; j++)
    {
        swap(input[j],input[0]);
        output[i] = input[0];//Fixing the changed first character
        input1 = input.substr(1);
        permutations(input1, output, i+1);
    }
}

int main()
{
    cout << "Enter string ";
    string s, o;
    cin >> s;
    permutations(s, o, 0);
    cout << p;
    return 0;
}