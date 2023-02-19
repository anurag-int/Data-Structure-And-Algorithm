//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
// } Driver Code Ends

int Partition(int arr[], int low, int high)
    {
        int pivot = arr[low];
        int i = low, j = high;
        while(i < j)
        {
            while(arr[i] <= pivot && i<=high-1) i++;
            while(arr[j] > pivot && j>=low) j--;
            if(i < j)
                swap(arr[i],arr[j]);
               
        }
        
        swap(arr[j], arr[low]);
        return j;
    }
    
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high)
        {
            int pivot = Partition(arr,low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
        return;
        
    }
    
    
    


//{ Driver Code Starts.
int main()
{
    
   int n;
   cin >> n;
   int arr[n];
   for(int i = 0; i < n; i++)
   {
        cin >> arr[i];
   }
    quickSort(arr, 0, n-1);
   for(int i=0;i<n;i++)
   {
    cout << arr[i] << " ";
   }
    return 0;
}
// } Driver Code Ends