#include<iostream>
using namespace std;

class Stack
{
    public:
    //behaviour
    int top;
    int *arr;
    int size;

    //constructor
    Stack(int size)
    {
        top = -1;
        this->size = size;
        arr = new int[size];
    }

    //push
    void push(int x)
    {
        if(size-top > 1)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack Over Flow" << endl;
        }
    }

    //pop
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Under Flow" << endl;
        }
    }

    //isEmpty
    bool isEmpty()
    {
        if(top >= 0)
        {
            cout << "Stack is Not Empty" << endl;
            return false;
        }
        else
        {
            cout << "Stack is Empty " << endl;
            return true;
        }
    }

    // peek element
    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Their is No element in Stack" << endl;
            return -1;
        }
        
    }


};


int main()
{
    Stack st(5);
    st.push(8);
    cout << st.peek() << endl;
    st.isEmpty();
    st.pop();
    st.isEmpty();
    return 0;
}