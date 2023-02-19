#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pSub(int i,vector<int> &ds, int arr[], int n)
{
    //base case
    if(i==n)
    {
        for(auto it : ds)
        {
            cout << it << " ";
        }
        if(ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // not picking the element 
    pSub(i+1, ds, arr, n);


    // for picking the element
    ds.push_back(arr[i]);
    pSub(i+1, ds, arr, n);
    ds.pop_back();


}

int main()
{
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> ds;
    pSub(0,ds,arr,n);
    return 0;
}