// Tarjans Algorithm for Strongly Connected Components
// Time Complexity O(V + E)
#include<bits/stdc++.h>
using namespace std;

 void dfs(int node,stack<int>&st,vector<int>&disc,vector<int>&low,vector<bool>&vis,
    vector<vector<int>> &result,vector<int>adj[], int&timer)
    {
        disc[node] = low[node] = timer++;
        st.push(node);
        vis[node] = true;
        for(auto x : adj[node])
        {
            if(disc[x] == -1){
                dfs(x,st,disc,low,vis,result,adj,timer);
                low[node] = min(low[x],low[node]);
                
            } else if(vis[x])
            {
                low[node] = min(low[node],disc[x]);
            }
        }
        
        if(low[node] == disc[node])
        {
            vector<int> ans;
            while(st.top() != node)
            {
                ans.push_back(st.top());
                vis[st.top()] = false;
                st.pop();
            }
            
            
         ans.push_back(st.top());
         vis[st.top()] = false;
         st.pop();
         sort(ans.begin(),ans.end());
         result.push_back(ans);
        }
        
        
}

vector<vector<int>> tarjans(int v, vector<int> adj[])
{
      int timer = 0;
      vector<int> disc(v,-1);
      vector<int> low (v,-1);
      vector<bool> vis(v,false);
      stack<int> st;
      vector<vector<int>> result;
      for(int i = 0; i < v; i++)
      {
          if(disc[i] == -1){
              dfs(i,st,disc,low,vis,result,adj,timer);
          }
      }
      
      sort(result.begin(),result.end());
      return result;
      
    }
    
void addEdges(vector<int> adj[], int u, int v)    
{
    adj[u].push_back(v);
}
    
int main()
{
    int nodes; 
    cin >> nodes;
    vector<int> adj[nodes];
    
    int edges;
    cin >> edges;
    
    for(int i = 0; i < edges; i++)
    {
        int a,b;
        cin >> a >> b;
        addEdges(adj,a,b);
    }
    
    vector<vector<int>> SCC = tarjans(nodes,adj);
    
    for(auto x : SCC)
    {
        for(auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    
    return 0;
    
}