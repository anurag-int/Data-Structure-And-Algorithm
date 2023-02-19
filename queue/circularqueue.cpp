#include<iostream>

using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // Initialize your data structure
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        // to check wether queue is full 
        if((front==0 && rear == size-1) || (rear==(front-1)%(size-1)))
        {
            return false;
        }
        // first element to push
        else if(front == -1)
        {
            front = rear = 0;
            
        }
        // to maintain the cyclic nature.
        else if(rear == size-1 && front != 0)
        {
            rear = 0;
        }
        //normal flow
        else
        {
            rear++;
        }
        arr[rear] = value;

        return true;
    }

    int dequeue()
    {
        // check if any element is present int the queue or not
        if(front == -1)
        {
            return -1;
        }

        
        int ans = arr[front];
        arr[front] = -1;

        // deleting the single element which is present in the queue.
        if(front == rear)
        {
            front = rear = -1;
        }

        // to maintain the cyclic nature.
        else if(front == size-1)
        {
            front = 0;
        }
        // normal flow
        else 
        {
            front++;
        }
        return ans;
    }

    void display()
    {
        cout << arr[rear] << " ";
    }
};

int main()
{
    CircularQueue cq(5);
    cq.enqueue(5);
    cq.enqueue(7);
    cq.display();
    
    cq.enqueue(9);
    cq.dequeue();
    cq.dequeue();
    cq.display();
    cq.enqueue(10);
    return 0;
}