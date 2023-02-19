#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "anurag";
    string str = "an";

    bool ans = false;
    for(int i=0;i<s.length();i++)
    {
        string temp = s.substr(i,str.length());
        if(temp == str)
        {
            ans = true;
        }
    }

    cout << ans << endl;
    return 0;
}