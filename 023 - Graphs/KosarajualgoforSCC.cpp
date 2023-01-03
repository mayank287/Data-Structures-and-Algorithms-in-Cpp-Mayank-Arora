// Kosaraju For Strongly Connected Components
#include<bits/stdc++.h>
using namespace std;
  
// TopoLogical Sort For Getting end time
  void toposort(stack<int> &st,vector<int> &vis,vector<int>adj[], int src)
    {
        vis[src] = 1;
        for(int it : adj[src])
        {
            if(!vis[it])
            {
                toposort(st,vis,adj,it);
            }
        }
        st.push(src);
    }
    
 // DFS According to topo sort   
    void revDFS(int node,vector<int> &vis,vector<int> transpose[])
    {
        vis[node] = 1;
        cout << node << " ";
        for(auto it : transpose[node])
        {
            if(!vis[it])
            {
                revDFS(it,vis,transpose);
            }
        }
    }

// Main Kosaraju    
    void kosaraju(int v, vector<int> adj[])
    {
        vector<int> vis(v,0);
        stack<int> st;
        
        for(int i = 0; i < v; i++)
        {
            if(vis[i] == false)
            {
                toposort(st,vis,adj,i);
            }
        }
        
 
       vector<int> transpose[v];
       for(int i = 0; i < v; i++)
       {
           vis[i] = 0;
           for(auto it : adj[i])
           {
               transpose[it].push_back(i);
           }
       }
       
       
         while(!st.empty())
         {
             int node = st.top();
             st.pop();
             if(!vis[node])
             {
        
                 
                 revDFS(node,vis,transpose);
                 cout << endl;
             }
         }
        
       
    }
    
    
 void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
    
int main()
{ 
    int nodes;
    cout << "Enter Nodes" << endl;
    cin >> nodes;
  
    vector<int> adj[nodes];
   
    int edges;
    cout << "Enter Edges" << endl;
    cin >> edges;
    
    for(int i = 0; i < edges; i++)
    {
        int a,b;
        cin >> a >> b;
        addEdge(adj,a,b);
    }
     cout << "SCC are Following" << endl;
     kosaraju(nodes,adj);
       
}
    
    
    
    