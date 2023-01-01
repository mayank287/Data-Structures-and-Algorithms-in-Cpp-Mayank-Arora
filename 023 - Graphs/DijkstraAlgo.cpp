// Dijkstra Algorithm
// Single Source Shortest Path Algo 
// Time Complexity O(vlogv + elogv)
class Solution
{
	public:
	
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        vector<int> distance(v,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        
        q.push({0,s});
        distance[s] = 0;
        
        while(!q.empty())
        {
            pair<int,int> top = q.top();
            int parentCost = top.first;
            int node = top.second;
            q.pop();
            
            for(auto it : adj[node])
            {
                int nextNode = it[0];
                int edgeCost = it[1];
                
                if((distance[node] + edgeCost < distance[nextNode]))
                {
                    distance[nextNode] = distance[node] + edgeCost;
                    q.push({distance[nextNode],nextNode});
                }
                
                
            }
            
        }
        return distance;
    }
};


// Some important Facts about Dijkstra Algorithm 
// Does not Work For Negative Weight Cycle  
// Does the Shortest Path change if add a weight to all edges of the original Graph 
// Answer is Yes it change (The Reason is that different number of edges )
// Does the Shortest Path change if Multiply a weight to all edges of the original Graph 
// Answer is No
