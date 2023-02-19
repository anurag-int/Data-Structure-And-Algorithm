#include<iostream>
using namespace std;

bool isPowerofTwo(long long n)
    {
        
        long long bit = 0;
        int count = 0;
        
        while(bit < 64)
        {
            long long data = n >> bit;
            if((data & 1) == 1)
            {
                count++;
            }
            
            
            bit++;
        }
        
        if(count == 1)
            return true;
        
        return false;
        
    }

int main()
{
    int n;
    cin >> n;
    cout << isPowerofTwo(n);

}