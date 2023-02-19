#include<iostream>
using namespace std;


int binarySearch(int arr[],int n,int val)
{
    int low = 0;
    int high = n-1;
    while(low < high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == val)
            return mid+1;
        else if(arr[mid] > val )
            high = mid;
        else
            low = mid + 1;
    }
    return -1;
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

    cout << "Enter the Element You want to Search" << endl;
    int element;
    cin >> element;
    cout << binarySearch(arr,n,element);

}