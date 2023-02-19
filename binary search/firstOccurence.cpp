#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int low, int high, int k)
{
    // base case
    if(low > high)
        return -1;


    int mid = (low + high) / 2;

    if(arr[mid] == k)
    {
        if(mid == 0 || arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else 
        {
            high = mid-1;
            return binarySearch(arr,n,low,high,k);
        }
    }
    else if(k > arr[mid])
    {
        low = mid+1;
        return binarySearch(arr,n,low,high,k);
    }
    else
    {
        high = mid - 1;
         return binarySearch(arr,n,low,high,k);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int low = 0;
    int high = n-1;
    cout << binarySearch(arr,n,low,high,k);

    return 0;
}