// Eucledean Algorithm -- > use to find out the GCD in very Optimized Way.

// Time Complexity --- log(min(a,b))

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    
    return gcd(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a,b);
}