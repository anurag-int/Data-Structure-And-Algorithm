#include<iostream>

using namespace std;


class Queue
{   
    //properties
    int qfront;
    int qrear;
    int *arr;
    int size;

    //constructor
    public:
    Queue(int s)
    {
        arr = new int[s];
        this->size = s;
        this->qfront = 0;
        this->qrear = 0;
        

    }

    //push
    void enqueue(int n)
    {
        if(qrear == size)
        {
            cout << "queue is full." << endl;
        }
        else
        {
            arr[qrear] = n;
            qrear++;
        }
    }

    //pop
    int dequeue()
    {
        if(qfront==qrear)
        {
            cout << "Queue is Empty." << endl;
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == qrear)
            {
                qfront = 0;
                qrear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if(qfront==qrear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    bool isEmpty()
    {
        if(qfront == qrear)
        {
            cout << "Queue is empty "<< endl;
            return true;
        }
        else
        {
            cout << "Queue is not Empty " << endl;
            return false;
        }
    }



};

int main()
{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(6);
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.isEmpty();
    q.dequeue();
    q.isEmpty();
    return 0;

}
