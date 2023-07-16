#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
    return;
}

void printAdjancencyList(vector<int> adj[], int V)
{
    for(int i=0;i<V;i++)
    {
        
        for(auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int V = 4;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    printAdjancencyList(adj, V);
    
}