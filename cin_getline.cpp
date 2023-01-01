#include<iostream>
using namespace std;

int main()
{
    cout << "Enter sentences " << endl;
    char sentence[1000], sentences[1000];
    cin.getline(sentences,1000);
    //syntax : cin.getline(character array name, size of character array, input buffer terminating character<optional>)

    cout << "Enter a sentence. If you enter more than one only first will be accepted" << endl;
    cin.getline(sentence, 1000, '.');
    cout << "Printing sentences " << endl << sentences << endl;
    cout << "Printing sentence" << endl << sentence << endl;
    return 0;
}