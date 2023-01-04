// Articulation Point in Graphs 
#include<bits/stdc++.h>

using namespace std;

void dfs(int node,int parent,vector<int>&vis,vector<int>&dis,
   vector<int>&low,int &timer,vector<int> adj[],vector<int>&isArticulation)
   {
       vis[node] = 1;
       dis[node] = low[node] = timer++;
       int child = 0;
       for(auto x : adj[node])
       {
           if(!vis[x])
           {
               child++;
               dfs(x,node,vis,dis,low,timer,adj,isArticulation);
               low[node] = min(low[node],low[x]);
               if(low[x] >= dis[node] && parent != -1)
               {
                   isArticulation[node] = 1;
               }
              
           }
            else if(x != parent){
                   low[node] = min(low[node],dis[x]);
               }
           
       }
           if(parent == -1 && child > 1)
           {
               isArticulation[node] = 1;
           }
   }
    vector<int> articulationPoints(int n, vector<int>adj[]) {
      vector<int> ans;
      vector<int> low(n, -1);
      vector<int> dis(n,-1);
      vector<int> vis(n,0);
      vector<int> isArticulation(n,0);
      int timer = 0;
      for(int i = 0; i < n; i++)
      {
          if(!vis[i])
          {
              dfs(i,-1,vis,dis,low,timer,adj,isArticulation);
          }
          
         
      }

       for(int i = 0; i < n; i++)
          {
              if(isArticulation[i] == 1) ans.push_back(i);
          }
              if(ans.size() == 0) return {-1};
          
          return ans;
}
    
void addEdges(vector<int> adj[], int u, int v)    
{
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}
    
int main()
{
    int nodes; 
    cin >> nodes;
    vector<int> adj[nodes + 1];
    
    int edges;
    cin >> edges;
    
    for(int i = 0; i < edges; i++)
    {
        int a,b;
        cin >> a >> b;
        addEdges(adj,a,b);
    }
    
    vector<int> ap = articulationPoints(nodes,adj);
    
    for(auto x : ap)
    {
        cout << x << " ";
    }
    
    
    return 0;
    
}