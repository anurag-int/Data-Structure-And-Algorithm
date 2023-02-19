#include<iostream>

using namespace std;

int sum(int n)
{
        
        while(n >= 10)
        {
            int sum = 0;
            while(n > 0)
            {
                int rem = n % 10;
                sum += rem;
                n = n/10;
            }
            if(sum < 10)
                return sum;
            else
                n = sum;
        }
        return n;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}