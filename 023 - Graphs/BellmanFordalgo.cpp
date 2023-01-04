// Bellam Ford Algorithm 
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