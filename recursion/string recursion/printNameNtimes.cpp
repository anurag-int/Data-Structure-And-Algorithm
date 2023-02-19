#include<iostream>

using namespace std;

void fun(int n)
{
    if(n<1)
    {
        return;
    }
    cout << "Anurag Gupta" << endl;
    n--;
    fun(n);
}

int main()
{  
    int n;
    cin >> n;
    fun(5);
    return 0;
}

// // stack
// |                 |
// |     f(1)        | 
// |     f(2)        |
// |     f(3)        |
// |     f(4)        |
// |     f(5)        |
// |-----------------|