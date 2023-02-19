#include<iostream>

using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;

    public:
    //constructor
    Stack(int n)
    {
        this->size = n;
        arr = new int[size];
        top = -1;
    }
    
    // pop
    int pop()
    {
        if(top < 0)
        {
            cout << "stack underflow " << endl;
        }
        else
        {
            int temp = arr[top];
            top--;
            return temp;
        }
    }

    // push
    void push(int value)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = value;
            
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
       
    }

    //seek
    int seek()
    {
        if(top == -1)
            return -1;
        else
        {
            return arr[top];
        }
    }

    // display
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};
int main()
{
    Stack s(5);
    s.push(5);
    s.push(8);
    s.push(6);
    s.push(10);
    s.push(55);
    s.display();
    s.pop();
    s.pop();
    s.display();
    return 0;
}

        
    
