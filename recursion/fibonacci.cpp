#include<iostream>
using namespace std;

int f(int n)
{
    //base case
    if(n<=1)
        return n;
    int last = f(n-1);
    int second_last = f(n-2);
    return last + second_last;

    // or
    // return f(n-1) + f(n-2);
    
}

int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}