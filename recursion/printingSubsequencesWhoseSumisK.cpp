#include<iostream>
#include<vector>
using namespace std;

void printS(int ind, vector<int> &ds,int temp_sum, int sum, int arr[], int n)
{
    // base case 
    if(ind == n)
    {
        if(temp_sum == sum)
        {
            for(auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    temp_sum += arr[ind];

    printS(ind+1, ds, temp_sum, sum, arr, n);
    temp_sum -= arr[ind];
    ds.pop_back();
    

    printS(ind+1, ds, temp_sum, sum, arr, n );
}

int main()
{
    int n = 3;

    int arr[] = {1,2,1};

    int sum = 2;

    vector<int> ds;

    printS(0, ds, 0, sum, arr, n);              
}