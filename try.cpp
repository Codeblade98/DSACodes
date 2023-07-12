 #include<bits/stdc++.h>
 using namespace std;

 int partition(vector<int> &a, int s, int e)
 {//returns the location of pivot in sorted array
    int i = s - 1 ;//will move only if swapping required
    int j = s;//will traverse through array
    int pivot = a[e];

    while(j < e)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[j],a[i]);

        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
 }

 void quick_sort(vector<int> &a,int s, int e)
 {
    if(s >= e)
        return;

    int p = partition(a,s,e);
    
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
 }

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
