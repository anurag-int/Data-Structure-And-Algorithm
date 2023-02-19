// print linearly from 1 to N (But by using BackTracking)

#include <iostream>
using namespace std;

void fun(int i,int n)
{
    // base case
    if(i<1)
        return;
    fun(i-1,n);
    cout << i << " ";

}

int main()
{
    int n;
    cin >> n;
    fun(n,n);
    return 0;
}