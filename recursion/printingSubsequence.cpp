#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int ind, vector<int> &v, int arr[], int n, int &count)
{
    // base case
    if (ind == n)
    {
        if (v.size() == 0)
        {
            cout << "{}" << endl;
            count++;
            return;
        }
        else
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
            count++;

            return;
        }
    }

    v.push_back(arr[ind]);
    printSubsequence(ind + 1, v, arr, n, count);
    v.pop_back();
    printSubsequence(ind + 1, v, arr, n, count);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v;
    int count = 0;

    printSubsequence(0, v, arr, n, count);

    cout << "the no of count is  : " << count << endl;

    cout << endl;
    return 0;
}