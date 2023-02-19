#include<iostream>

using namespace std;


int rainWaterTrap(int arr[], int n)
{
    int NGL[n];
    int NGR[n];
    int WaterLeft[n];

    NGL[0] = arr[0];
    NGR[n-1] = arr[n-1];

    for(int i=1;i<n;i++)
    {
        NGL[i] = max(arr[i], NGL[i-1]);
    }

    for(int i=n-2;i>=0;i--)
    {
        NGR[i] = max( arr[i], NGL[i+1]);
    }


    
    for(int i=0;i<n;i++)
    {
        WaterLeft[i] = min(NGL[i], NGR[i]) - arr[i];
    }

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += WaterLeft[i];
    }
    return sum;
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


    cout << rainWaterTrap(arr, n);

    return 0;


}