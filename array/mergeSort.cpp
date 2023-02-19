#include<iostream>

using namespace std;

void mergeSort(int )

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr,0,n-1);
}