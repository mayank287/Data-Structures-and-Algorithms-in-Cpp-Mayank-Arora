// Return Number  of Strongly Connected Components 
// Time Complexity O(V + E) and Space O(V)
#include<bits/stdc++.h>
using namespace std;
  

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
    
    void revDFS(int node,vector<int> &vis,vector<int> transpose[])
    {
        vis[node] = 1;
 
        for(auto it : transpose[node])
        {
            if(!vis[it])
            {
                revDFS(it,vis,transpose);
            }
        }
    }
    int kosaraju(int v, vector<int> adj[])
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
        
       int count = 0;
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
                 count++;
                 
                 revDFS(node,vis,transpose);
             
             }
         }
        return count;
     
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
     cout << "Count of SCC are Following" << endl;
     cout << kosaraju(nodes,adj);
       
}
    
    
    
    
