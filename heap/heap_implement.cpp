#include<iostream>
using namespace std;


class heap
{
    public:
    int arr[100];
    int size;

    // constructor
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        // stepl: put in the last index of the array
        // step2: now check if child is greater than its parent or not if it is than make child as parent and so till  (index > 1).

        size++;
        int index = size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index / 2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]); 
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        // step1: if(size == 0)  than just return.
        // step2: Put last node in the first node and do size--  so no one can access the last node of the heap.
        // step2: Take root node to its correct position.

        if(size == 0)
        {
            cout << "Heap is Empty!" << endl;
        }

        // step1: put last element into first index
        arr[1] = arr[size];

        // step2: remove last element
        size--;

        // step3: take root node to its correct position.
        int index = 1;
        while(index < size)
        {
            int left_child = 2 * index;
            int right_child = 2 * index + 1;

            if(left_child < size && arr[index] < arr[left_child])
            {
                swap(arr[index], arr[left_child]);
                index = left_child;
            }
            else if(right_child < size && arr[index] < arr[right_child])
            {
                swap(arr[index], arr[right_child]);
                index = right_child;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        { 
            cout << arr[i] << " ";  
        }
        cout << endl;
    }
};

// Its an algorithm through which we can find the correct position of that element.
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left_child = 2 * i;
    int right_child = 2 * i + 1;

    if(left_child <= n && arr[left_child] > arr[largest])
    {
        largest = left_child;
    }
    if(right_child <= n && arr[right_child] > arr[largest])
    {
        largest = right_child;
    }
    
    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
    return;
}

void heapSort(int arr[], int n)
{
    int size = n;
    while(size > 1)
    {
        // step1: swap
        swap(arr[1], arr[size]);
        size--;

        //step3
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for(int i=n/2; i>= 1;i--)
    {
        heapify(arr, n, i);
    }

    heapSort(arr, n);
    cout << "after heapSort algorithm" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}