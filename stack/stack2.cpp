#include <iostream>
using namespace std;

class Stack
{
    public:
    //behaviour
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size)
    {
        top = -1;
        this -> size = size;
        arr = new int[size];
    }


    //push
    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is Over Flow" << endl;
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
            cout << " stack is under flow ";
        }
    }

    //top 
    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
        
    }

    //isEmpty
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    cout << st.peek() << " ";
    st.push(2);
    st.push(3);
    st.pop();
    cout << st.peek();
    cout << st.isEmpty();
    
}