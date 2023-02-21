#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e);
void quick_sort(vector<int> &a, int s, int e);

int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
	int s = 0;
	int e = arr.size()-1;
  	quick_sort(arr,s,e);
	for(int x : arr)
	{
		cout<< x << ",";
	}
	cout << endl;
	return 0;
}

void quick_sort(vector<int> &a, int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int p = partition(a,s,e);//divides the array into two parts and returns position of pivot in sorted array
    
    //now we need to quick sort the parts before and after the pivot
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
}

int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;
    for(int j = s; j < e; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[e]);
    return i + 1;
}