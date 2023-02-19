#include<iostream>

using namespace std;

class queue
{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    int count;
    //Constructor

    public:
    queue(int n)
    {
        this->size = n;
        arr = new int[n];
        this->front = 0;
        this->rear = 0;
        this->count = 0;
    }

    void enqueue(int data)
    {
        if(size == rear)
        {
            cout << "Space not Available !" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
            count++;
        }
    }

    int dequeue()
    {
        if(front == rear)
        {
            cout << "Queue is empty !" << endl;
            return -1;
        }
        else
        {
            int temp_data = arr[front];
            front++;
            count--;
            if(front == rear)
            {
                front = rear = 0;
            }
            return temp_data;
        }
    }

    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
            return false;
    }

    int queueSize()
    {
        return count;
    }
    
    void print()
    {
        for(int i = front;i<rear;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

};

int main()
{

        queue myQueue(5);
        myQueue.enqueue(5);
        myQueue.enqueue(6);
        myQueue.enqueue(7);
        myQueue.print();
        cout << myQueue.queueSize() << endl;
        myQueue.dequeue();
        myQueue.print();
        return 0;

}