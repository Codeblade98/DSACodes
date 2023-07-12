#include<bits/stdc++.h>
using namespace std;

int rot_search(int key, vector<int>a)
{
    int s = 0;
    int e = a.size() - 1;
       
    while(s < e)   
    {
        int mid = (s + e)/2;

        if(key == a[mid])
        {
            return mid;
        }
        
        if(a[s] < a[mid])
        {
            if(key>=a[s] && key<a[mid])
            {
                e = mid - 1;
            }

            else
            {
                s = mid + 1;
            }
        }

        else
        {
            if(key>a[mid] && key<=a[e])
            {
                s=mid+1;
            }

            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {8,10,12,15,18,2,3,4,7};
    int key;
    cout << "Enter the number to be searched ";
    cin >> key;
    cout << rot_search(key,arr);
    return 0;
}
