// Topological Sort Using DFS
// Time Complexity O(V + E)
#include<bits/stdc++.h> 
using namespace std; 

void DFS(vector<int> adj[], int u,stack<int> &st, bool visited[]) 
{ 	
    visited[u]=true;
    
    for(int v:adj[u]){
        if(visited[v]==false)
            DFS(adj,v,st,visited);
    }
    st.push(u);
}


void topologicalSort(vector<int> adj[], int V) 
{ 
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false; 
	   stack<int> st;
    
    for(int u=0;u<V;u++){
        if(visited[u]==false){
            DFS(adj,u,st,visited);
        }
    }
    
    while(st.empty()==false){
        int u=st.top();
        st.pop();
        cout<<u<<" ";
    }
   
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,1, 3); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 4); 
    addEdge(adj,2, 4);  
  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);

	return 0; 
} 


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
        cout << node << " ";
        for(auto it : transpose[node])
        {
            if(!vis[it])
            {
                revDFS(it,vis,transpose);
            }
        }
    }
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
                //  count++;
                 
                 revDFS(node,vis,transpose);
                 cout << endl;
             }
         }
        
        // return count;
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
    // int v = 5;
    vector<int> adj[nodes];
    // addEdge(adj,0,2);
    // addEdge(adj,2,1);
    // addEdge(adj,1,0);
    // addEdge(adj,2,3);
    // addEdge(adj,3,4);
    // addEdge(adj,4,3); 
    
    
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
    
    
    
    