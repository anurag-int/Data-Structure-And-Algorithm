class Solution
{
    public: 
    
    int minEle;
    stack<int> st;
    public:
    
    int getMin()
    {
        if(st.empty())
            return -1;
        return minEle;
    }
       
       /*returns poped element from stack*/
    int pop()
    {
        if(st.empty())
            return -1;

        else 
        {
            int ans;
            if(st.top() >= minEle)
            {
                ans = st.top();
                st.pop();
            }
            else if(st.top() < minEle)
            {
                ans=minEle;
                minEle = (2*ans-st.top());
                st.pop();
            }
        }
        return ans;
           //Write your code here
    }
       
       /*push element x into the stack*/
    void push(int x)
    {
        if(st.empty())
        {
            minEle = x;
            st.push(x);
        }
        else
        {
            if(x<minEle)
            {
                st.push(2*x - minEle);
                minEle=x;
            }
            else
            {
                st.push(x);
            }
        }
    }
};