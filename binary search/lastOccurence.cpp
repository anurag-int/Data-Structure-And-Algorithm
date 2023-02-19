#include<iostream>
using namespace std;


int lastOcc(int arr[], int n, int low, int high, int k)
{
    if(low > high) return -1;

    int mid = low + (high-low)/2;
    if(k > arr[mid])
    {
        low = mid + 1;
        return lastOcc(arr,n,low,high,k);
    }
    else if(k < arr[mid])
    {
        high = mid - 1;
        return lastOcc(arr,n,low,high,k);
    }
    else
    {
        if(mid == n-1 || arr[mid+1]!=arr[mid])
            return mid;
        else
        {
            low = mid + 1;
            return lastOcc(arr,n,low,high,k);
        }
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
    int k;
    cin >> k;
    int low = 0,high = n-1;
    cout << lastOcc(arr,n,low,high,k);
    return 0;
}