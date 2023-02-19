class Solution
{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin()
       {
           if(s.size() == 0)
                return -1;
                
            else
            {
                return minEle;
            }
       }
       
       /*returns poped element from stack*/
       int pop()
       {
           if(s.size() == 0)
                return -1;
                
            else
            {
                if(s.top() >= minEle)
                {
                    int ans = s.top();
                    s.pop();
                    return ans;
                }
                else if(s.top() < minEle)
                {
                    int ans = minEle;
                    minEle = 2 * minEle - s.top();
                    s.pop();
                    return ans;
                }
            }
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.size() == 0)
           {
               s.push(x);
               minEle = x;
           }
           else if(x >= minEle)
           {
               s.push(x);
           }
           else if(x < minEle)
           {
               s.push(2 * x - minEle);
               minEle = x;
           }
       }
};