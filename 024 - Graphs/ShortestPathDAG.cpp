// Shortest Path in DAG 
// Time Complexity O(V + E)
class Solution {
  private:
  void topoSort(vector<pair<int,int>> adj[], int src, stack<int> &st, bool visited[])
  {
      visited[src] = true;
      
      for(auto it : adj[src])
      {
          if(!visited[it.first])
          {
              topoSort(adj,it.first,st,visited);
          }
      }
      
      st.push(src);
  }
  public:
  
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        vector<int> ans;
        
        vector<pair<int,int>> adj[n];
        // Storing Values
        for(int i = 0; i < m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v,wt});
        }
        

        // Doing Topological Sort
        bool visited[n];
        fill(visited,visited + n,false);
        
        stack<int> st;
        
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                topoSort(adj,i,st,visited);
            }
        }
        
        

        // Calculating Weights
        vector<int> dist(n,1e9);
        dist[0] = 0;
        
        while(!st.empty())
        {
            int p = st.top();
            st.pop();
            
            for(auto it : adj[p])
            {
                int v = it.first;
                int wt = it.second;
                
                if(dist[p] + wt < dist[v])
                {
                    dist[v] = dist[p] + wt;
                }
            }
            
        }
        
        // String Values in output vector
        for(int i = 0; i < n; i++)
        {
            if(dist[i] == 1e9) ans.push_back(-1);
            else ans.push_back(dist[i]);
            
        }
        
        return ans;
        
    }
};


// For Refrence 
#include <bits/stdc++.h> 
#define INF INT_MAX 
using namespace std; 

class AdjListNode 
{ 
	int v; 
	int weight; 
public: 
	AdjListNode(int _v, int _w) { v = _v; weight = _w;} 
	int getV()	 { return v; } 
	int getWeight() { return weight; } 
}; 

class Graph 
{ 
	int V;

	list<AdjListNode> *adj; 

	void topologicalSortUtil(int v, bool visited[], stack<int> &Stack); 
public: 
	Graph(int V); 
 
	void addEdge(int u, int v, int weight); 
 
	void shortestPath(int s); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<AdjListNode>[V]; 
} 

void Graph::addEdge(int u, int v, int weight) 
{ 
	AdjListNode node(v, weight); 
	adj[u].push_back(node);  
} 

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack) 
{ 
	
	visited[v] = true; 

	list<AdjListNode>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
	{ 
		AdjListNode node = *i; 
		if (!visited[node.getV()]) 
			topologicalSortUtil(node.getV(), visited, Stack); 
	} 

	Stack.push(v); 
} 

void Graph::shortestPath(int s) 
{ 
	stack<int> Stack; 
	int dist[V]; 

	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 
 
	for (int i = 0; i < V; i++) 
		if (visited[i] == false) 
			topologicalSortUtil(i, visited, Stack); 

	for (int i = 0; i < V; i++) 
		dist[i] = INF; 
	dist[s] = 0; 

	while (Stack.empty() == false) 
	{  
		int u = Stack.top(); 
		Stack.pop(); 
 
		list<AdjListNode>::iterator i; 
		if (dist[u] != INF) 
		{ 
		for (i = adj[u].begin(); i != adj[u].end(); ++i) 
			if (dist[i->getV()] > dist[u] + i->getWeight()) 
				dist[i->getV()] = dist[u] + i->getWeight(); 
		} 
	} 

	for (int i = 0; i < V; i++) 
		(dist[i] == INF)? cout << "INF ": cout << dist[i] << " "; 
} 

int main() 
{ 
	Graph g(6); 
	g.addEdge(0, 1, 2); 
	g.addEdge(0, 4, 1); 
	g.addEdge(1, 2, 3); 
	g.addEdge(4, 2, 2); 
	g.addEdge(4, 5, 4); 
	g.addEdge(2, 3, 6); 
	g.addEdge(5, 3, 1);

	int s = 0; 
	cout << "Following are shortest distances from source " << s <<" \n"; 
	g.shortestPath(s); 

	return 0; 
} 
