#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt)
{

    int n = txt.length();
    int k = pat.length();
    
    unordered_map<char, int> mp;

    for (int i = 0; i < k; i++)
    {
        mp[pat[i]]++;
    }

    int count = mp.size();
    int ans = 0;
    int i = 0, j = 0;

    while (j < n)
    {
        // calculation
        if (mp.find(txt[j]) != mp.end())
        {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0)
            {
                count--;
            }
        }

        if (j - i + 1 == k)
        {
            // calculation for ans
            if (count == 0)
            {
                ans++;
            }

            // for slide the window
            if (mp.find(txt[i]) != mp.end())
            {
                mp[txt[i]]++;

                if (mp[txt[i]] == 1)
                {
                    count++;
                }
            }
            i++;
        }
        j++;
    }
    return ans;
}

int main()
{

    string txt, pat;
    getline(cin, txt);
    getline(cin, pat);

    cout << search(pat, txt);
    return 0;
}
