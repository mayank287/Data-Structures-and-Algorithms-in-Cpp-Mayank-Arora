// Detect Cycle in Directed Graph Using Kahn based BFS Algo
// Time Complexity O(v + e)
// Code - 1 (Taking Input)

#include<vector>
#include<iostream>
#include<queue>
using namespace std;

void topologicalSort(vector<int> adj[], int v)
{
    vector<int> in_degree(v,0);
    
    for(int u = 0; u < v; u++)
    {
        for(int x : adj[u])
        {
            in_degree[x]++;
        }
    }
    
    queue<int> q;
    
    for(int i = 0; i < v; i++) 
    {
        if(in_degree[i] == 0)
        {
            q.push(i);
            
        }
    }
    
    int count =- 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(int x : adj[u])
        {
            if(--in_degree[x] == 0) q.push(x);
            
        }
        count++;
        
    }
    if(count != v)
    {
        cout << "There is Cycle" << endl;
        
    }
    else{
        cout << "No Cycle" << endl;
    }
    
    
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 

     int v;
     cout << "No of Nodes" << endl;
     cin >> v;
     vector<int> adj[v];
     
     int n;
     cout << "Enter no of Edges" << endl;
     cin >> n;
     cout << "Enter Edges" << endl; 
     for(int i = 0; i < n; i++)
     {
         int x,y;
         cin  >> x >> y;
         addEdge(adj,x,y);
         
     }
     
  
    topologicalSort(adj,v);

	return 0; 
} 


// Code - 2 Not Taking Input
#include<bits/stdc++.h> 
using namespace std; 

void topologicalSort(vector<int> adj[], int V) 
{ 
    vector<int> in_degree(V, 0); 
  
    for (int u = 0; u < V; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    } 
  
    queue<int> q; 
    for (int i = 0; i < V; i++) 
        if (in_degree[i] == 0) 
            q.push(i); 

    int count=0;  
    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
  
        for (int x: adj[u]) 
            if (--in_degree[x] == 0) 
                q.push(x); 
        count++;
    } 
    if (count != V) { 
        cout << "There exists a cycle in the graph\n"; 
    }
    else{
        cout << "There exists no cycle in the graph\n";
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
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 2);  
  
    topologicalSort(adj,V);

	return 0; 
} 
