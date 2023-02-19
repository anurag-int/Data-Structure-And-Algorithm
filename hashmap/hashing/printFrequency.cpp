#include<bits/stdc++.h>
using namespace std;


void countFrequency(int arr[],int n)
{
    unordered_map <int,int> u_map;
    for(int i=0;i<n;i++)
    {
        u_map[arr[i]]++;
    }
    for(auto it: u_map)
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    countFrequency(arr,n);
    return 0;
}