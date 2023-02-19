


#include<iostream>
using namespace std;


                                                                  //parameterised Recursione 

// void fun(int i, int sum)
// {
//     //base case
//     if(i<1)
//     {
//         cout << sum << endl;
//         return;
//     }
//     fun(i-1,sum+i);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     fun(n,0);
//     return 0;
// }


//  functional recursion
int fun(int n)
{
    
    if(n < 1)
        return 0;
    
    return n + fun(n-1);
    
}


int main()
{
    int n;
    cin >> n;
    cout <<  fun(n) << endl;
}