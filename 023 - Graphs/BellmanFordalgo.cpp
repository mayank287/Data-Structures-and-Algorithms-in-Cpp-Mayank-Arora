// Bellam Ford Algorithm 
// Time Complexity O(VE)

#include<bits/stdc++.h>
using namespace std;
 vector<int> bellman_ford(int v, vector<vector<int>>& edges, int s) {
       vector<int> distance(v,1e8);
       distance[s] = 0;
       
       for(int i = 0; i < v - 1; i++)
       {
           for(auto j : edges)
           {
               int u = j[0],v = j[1],wt = j[2];
               if(distance[u] + wt < distance[v])
                distance[v] = distance[u] + wt;
           }
       }
       
       
       
       for(auto i : edges)
       {
           int u = i[0], v = i[1], wt = i[2];
           if(distance[u] + wt < distance[v]) return {-1};
       }
       
       return distance;
    }
    
    
void addEdges(vector<vector<int>>&Edges, int u, int v, int w)
{
   vector<int> temp;
   temp.push_back(u);
   temp.push_back(v);
   temp.push_back(w);
   
   Edges.push_back(temp);
   
}

int main()
{
    vector<vector<int>> Edges;
    int nodes;

    cin >> nodes;
    int Edge;
 
    cin >> Edge;
  
    
    for(int i = 0; i < Edge; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        
        addEdges(Edges,u,v,w);
    }

    int source;
    cin >> source;
    
    vector<int> ans = bellman_ford(nodes,Edges,source);
    for(int x : ans)
    {
        cout << x << " ";
    }
    
    
}
    
    