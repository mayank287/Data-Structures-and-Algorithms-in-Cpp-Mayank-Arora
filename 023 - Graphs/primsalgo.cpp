// prims algo for mst 
#include<bits/stdc++.h>
using namespace std;
void spannigTree(int v, vector<pair<int,int>>adj[])
{
    int inf = INT_MAX;
    int cost = 0;
    vector<bool> mst(v,false);
    vector<int> key(v,inf);
    vector<int> parent(v,-1);
    
    key[0] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({key[0],0});
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        mst[u]= true;
        for(auto it : adj[u])
        {
            if(!mst[it.first] && it.second < key[it.first])
            {
                 key[it.first] = it.second;
                 parent[it.first] = u;
                pq.push({it.second,it.first});
            }
        }
    }
    
    for(int i = 0; i < v; i++)
    {
        cost += key[i];
    }
    
    cout << cost << endl;
    for(int i = 1; i < v; i++)
    {
        cout << i << " - " <<  parent[i] << " = " << key[i] << endl;
        
    }

}


void addEdge(int u, int v,int w,vector<pair<int,int>> adj[])
{
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
int main()
{
    vector<pair<int,int>>  adj[100];
    addEdge(0,1,1,adj);
    addEdge(1,2,2,adj);
    addEdge(2,3,5,adj);
    addEdge(3,0,4,adj);
    addEdge(0,2,3,adj);
    
    
    
    spannigTree(4,adj);
}
