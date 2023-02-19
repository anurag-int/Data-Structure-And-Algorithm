queue<int> modifyQueue(queue<int> q, int k) 
{
    // Algorithm
    
    // step 1 : pop first k elements and put into stack.
    stack<int> s;
    int count = 0;
    while(count != k)
    {
        int element = q.front();
        s.push(element);
        q.pop();
        count++;
    }
    
    // step2 : pop elements from stack and push into queue.
    while(!s.empty())
    {
        int element = s.top();
        q.push(element);
        s.pop();
    }
    
    // fetch first (n-k) elements from queue and push at the back of queue
    
    int t = q.size()-k;
    while(t--)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
    
    
    
}