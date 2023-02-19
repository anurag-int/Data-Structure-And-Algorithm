#include<iostream>
#include<bits/stdc++.h>

using namespace std;
 
void countSubarray(int arr[],int n)
{
    unordered_map<int,int> mp;
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        ans++;
        sum += arr[i];
        mp[sum]++;
    }
    for(auto it: mp)
    {
        if(it.second > 1)
        {
            ans++;
        }
    }
    cout << ans << endl;

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
    countSubarray(arr,n);
    return 0;
}