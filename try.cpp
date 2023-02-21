 #include<bits/stdc++.h>
 using namespace std;

int binarySearch(vector<int> v, int x)
{
    // your code goes here
    int mid = v.size() / 2;
    
    if(v.size() == 0)
    {
        return -1;
    }
    
    if(x == v[mid])
    {
        return mid;
    }
    
    else if(x < v[mid])
    {
        vector<int> b;
        for(int i = 0; i < mid; i ++)
        {
            b[i] = v[i];
        }
        return binarySearch(b,x);
    }
    
    else if(x > v[mid])
    {
        vector<int> b;
        for(int i = mid + 1; i < v.size(); i++)
        {
            b[i] = v[i];
        }
        return (mid + binarySearch(b,x));
    }
}

int main()
{
   vector<int> arr = {1, 6, 14, 25, 48, 50, 78, 96, 124};
   int key;
   //cout << "Enter the number to be searched ";
   //cin >> key;
   cout << binarySearch(arr,6);
}