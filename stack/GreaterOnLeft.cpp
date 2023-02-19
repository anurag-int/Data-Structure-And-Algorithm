// brute force solution for greater on left side of the element in the array

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nextGreaterOnLeft(int arr[], int n)
{
    vector<int> v;
    
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        bool flag = false;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j] > arr[i])
            {
                v.push_back(arr[j]);
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            v.push_back(-1);
        }
    }

    return v;
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

    vector<int> v = nextGreaterOnLeft(arr,n);

    for(auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}