#include<iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{

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
    int arr[6] = {-1, 84,24,52,13,55};
    int n = 5;

    heapSort(arr, n);

    return 0;
}