#include<iostream>

using namespace std;


void search(int arr[], int n)
{

    if(arr[])
    int low = 0;
    int high = n-1;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1])
        {
            return arr[mid];
        }

        else
        {

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

    search(arr, n);
    return 0;
}