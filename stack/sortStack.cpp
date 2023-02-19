void sort_stack(stack<int> &s, int data)
{
    // base case
    if(s.empty() || (!s.empty() && s.top() < data))
    {
        s.push(data);
        return;
    }
    int val = s.top();
    s.pop();
    sort_stack(s, data);
    s.push(val);
}
void beneith(stack<int> &s)
{
    // base case
    if(s.empty())
    {
        return;
    }
    int data = s.top();
    s.pop();
    beneith(s);
    sort_stack(s,data);
    
}
void sort(stack<int> &s)
{
    beneith(s);
    return;
}