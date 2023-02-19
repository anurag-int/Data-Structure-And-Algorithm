/*
bool isValidParenthesis(string expression)
{

    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        // if opening bracket, stack push.
        //  if closing bracket, stack_top check and pop.
        char ch = expression[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if (ch == ')')
                {
                    if (top == '(')
                        s.pop();
                    else
                    {
                        return false;
                    }
                }
                else if (ch == ']')
                {
                    if (top == '[')
                        s.pop();
                    else
                        return false;
                }
                else
                {
                    if (top == '}')
                        s.pop();
                    else
                        return false;
                }
            }
        }
        if (s.empty() == true)
            return true;
        else
            return false;
    }
    */
