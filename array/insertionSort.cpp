#include <iostream>

using namespace  std;

void insetionSort(int a[],int n)
{
    int i, j, temp;  
    for (i = 1; i < n; i++) 
    {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0 && temp <= a[j])   
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
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
    insetionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}