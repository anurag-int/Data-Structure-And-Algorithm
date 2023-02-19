#include<iostream>
#include<vector>
using namespace std;

void subsequence(int i, int arr[], vector<int> &ds, int n)
{
    // base case
    if(i==n)
    {
        for(auto it : ds)
        {
            cout << it << " ";
        }
        if(ds.size()==0)
            cout << "{}" ;
        cout << endl;
        return;
    }

    subsequence(i+1, arr, ds, n); // not take condition

    ds.push_back(arr[i]);   // first add to the element and 
    subsequence(i+1,arr,ds,n);  // take condition  
    ds.pop_back();  // removing element from the vector and  return asa before it come


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
    vector<int> ds;
    subsequence(0,arr,ds,n);

    return 0;
}
