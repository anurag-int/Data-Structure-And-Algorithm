
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count = 0;
        solve(s, count, sizeOfStack);
    }
    
    void solve(stack<int>&s, int count, int N)
    {
        // base Case
        
        if(count==N/2)
        {
            s.pop();
            return;
        }
        
        
        // Recursive call
        
        int num = s.top();
        s.pop();
        
        solve(s,count+1,N);   // recursive call for go depth in the stack
        
        s.push(num);
    }
};

