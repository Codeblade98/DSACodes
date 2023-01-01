#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> a)
{
    int lar = a[0];
    for(int i = 1; i < a.size();i++)
        lar = max(lar,a[i]);

    vector<int> freq(lar + 1,0);

    
    for(int i = 0; i < a.size() ; i++)
        freq[a[i]]++;
    

    int j = 0;
	for(int i = 0; i < lar + 1; i++)
    {
        while(freq[i]>0)
        {
			a[j] = i;
			freq[i]--;
            j++;
		}
	}
    return a;
}

int main()
{
    vector<int> arr = {3,4,2,1,5,6,8,7,10,11,9,12};
    arr = sort(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}
