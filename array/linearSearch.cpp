#include<iostream>
using namespace std;


int linearSearch(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == element)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Element You want to Search" << endl;
    int element;
    cin >> element;
    cout << linearSearch(arr,n,element);

}