#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

void rev_string(int i,int j,string& str)
{
    if(i>j)
    {
        
        return;
    }

    swap(str[i++],str[j--]);

    rev_string(i,j,str);
   
    
    

    
}

int main()
{
    string str;
    cin >> str;
    int length = str.length()-1;
    rev_string(0,length,str);
    cout << str << endl;
    return 0;
}