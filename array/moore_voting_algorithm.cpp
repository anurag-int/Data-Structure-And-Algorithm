#include<iostream>
using namespace std;

int moore_voting_algorithm(int arr[], int n)
    {
        
        int count = 1;
        int no = arr[0];

        for(int i=1;i<n;i++)
        {
            if(arr[i] == no)
            {
                count++;
            }
            else if(arr[i] != no)
            {
                count--;
            }
            if(count == 0)
            {
                no = arr[i];
                count++;
            }
                
        }
        int no_count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==no)
                no_count++;
        }
        
        if(no_count > (n/2))
            return no;
            
        else
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

    cout << moore_voting_algorithm(arr, n);
    return 0;
}