// print from N TO 1 (using Backtracking)
#include<iostream>
using namespace std;

void fun(int i, int n)
{
    //base case
    if(i > n)
        return;
    fun(i+1,n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    fun(1,n);
    return 0;
}