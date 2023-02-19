class Solution{
public:
    //Function to reverse every sub-array group of size k.
    
    void reverse(vector<long long>& arr, int i, int j)
    {
        while(i < j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return;
    }
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        for(int i=0;i<n;i=i+k)
        {
            int j = (i+k-1 < n  ?  i+k-1 : n-1);
            reverse(arr,i,j);
        }
        return;
    }
};


// N = 5 , K = 3;
// arr[] = 1 2 3 4 5
// Output =>  3 2 1 5 4