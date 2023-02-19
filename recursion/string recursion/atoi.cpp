#include<iostream>
#include<string>
using namespace std;

void atoi(string s)
{
    string str = "";
    for(int i=s.length()-1;i>=0;i--)
    {
        str += s[i];
    }
    
    int sum = 0;
    for(int i=0;i<s.length();i++)
    {
        int diff = int(str[i]) - 48;
        // int x = diff - 48;
        sum = (sum * 10) + diff;
        
        // cout << diff << " ";
        
    }
    int sum2 = 0;
    while(sum > 0)
    {
        int rem = sum % 10;
        sum2 = (sum2 * 10) + rem;
        sum = sum / 10;
    }
    
    cout << sum2;

    
}

int main()
{
    string s;
    getline(cin,s);
    atoi(s);
    return 0;
}