#include<bits/stdc++.h>

using namespace std;
vector<long long> minOnLeft(long long arr[], int n)
{
        vector<long long> v;
        stack<pair<long long,long long>> s;
        
        for(int i = 0;i<n;i++)
        {
            if(s.size() == 0)
            {
                v.push_back(-1);
            }
            else if(s.size() > 0 && s.top().first < arr[i])
            {
                v.push_back(s.top().second);
            }
            else if(s.size() > 0 && s.top().first >= arr[i])
            {
                while(s.size() > 0 && s.top().first >= arr[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }

        return v;
}

vector<long long> minAtRight(long long arr[], int n)
{
    vector<long long> v;
    stack<pair<long long, long long>> s;

    for(int i=n-1;i>=0;i--)
    {
        if(s.size() == 0)
        {
            v.push_back(n);
        }
        else if(s.size() > 0 && s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i])
        {
            while(s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if(s.size() == 0)
            {
                v.push_back(n);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});

    }
    reverse(v.begin(), v.end());

    return v;
}

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    vector<long long> v1 = minOnLeft(arr,n);
    
    vector<long long> v2 = minAtRight(arr,n);

    for(int i=0;i<n;i++)
    {
        v2[i] = (v2[i] - v1[i] - 1 ) * arr[i];
    }

    long long max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v2[i] > max)
        {
            max = v2[i];
        }
    }
    cout << max;
    return 0;
}