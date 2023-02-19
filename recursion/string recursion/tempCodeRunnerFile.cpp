#include<iostream>
#include<string>
using namespace std;

bool check_Palindrome(int i,int j,string str)
{
    if(i>j)
        return true;
    
    if(str[i] == str[j])
    {
        check_Palindrome(i++,j--,str);
    }

    else 
    return false;
}
    
int main()
{
    string str;
    cin >> str;
    int i=0,j=str.length()-1;
    cout <<  check_Palindrome(i,j,str) << endl;
    
    return 0;
}