#include <bits/stdc++.h>
using namespace std;

class Solution
{
    stack<int> min;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin()
       {
           if(s.empty())
           {
               return -1;
           }
           else
           {
               return min.top();
           }
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop()
       {
           if(s.empty())
            {
                return -1;
            }
            else
            {
                int ans = s.top();
                if(s.top() == min.top())
                {
                    s.pop();
                    min.pop();
                    return ans;
                }
                else
                {
                    s.pop();
                    return ans;
                }
            }
           
       }
       
       /*push element x into the stack*/
       void push(int x)
       {
           if(s.empty())
           {
               s.push(x);
               min.push(x);
           }
           else
           {
               if(x < min.top())
               {
                   s.push(x);
                   min.push(x);
               }
               else
               {
                   s.push(x);
               }
           }
       }
};



int main()
 {
    
}

