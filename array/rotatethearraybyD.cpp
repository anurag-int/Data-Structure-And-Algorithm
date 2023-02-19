#include <iostream>
using namespace std;

void reverse(int arr[],int low, int high)
{
    while(low < high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }

}


void rotateArray(int arr[], int n, int k)
{
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
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
    rotateArray(arr,n,k);
    
}