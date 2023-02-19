// reverse an stack using its property of LIFO.

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "Anurag";

    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string rev_string = "";

    while(!s.empty())
    {
        char ch = s.top();
        rev_string += ch;
        s.pop();
    }

    cout << rev_string << endl;
    return 0;
}