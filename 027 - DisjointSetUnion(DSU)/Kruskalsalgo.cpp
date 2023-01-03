// Time Complexity O(ElogE) and O(v) Time Complexity 
#include<bits/stdc++.h>
using namespace std;
#define edge pair<int,int>

class Graph{
    private:
    vector<pair<int,edge >> G; // graph
    vector<pair<int,edge>> T; //MST
    int *parent;
    int V; // Edges/Nodes
    public:
    Graph(int V);
    void AddEdges(int u , int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal();
    void print();
    
 };
 
 Graph :: Graph(int V)
 {
     parent = new int[V];
     for(int i = 0; i < V; i++)
     {
         parent[i] = i;
     }
     G.clear();
     T.clear();
 }
 
 void Graph::AddEdges(int u, int v, int w)
 {
     G.push_back(make_pair(w,edge(u,v)));
 }
 
 int Graph::find_set(int i )
 {
     if(i == parent[i]) return i;
     else return find_set(parent[i]);
 }
 
 void Graph::union_set(int u ,int v)
 {
     parent[u] = parent[v];
 }
 
 void Graph::kruskal()
 {
     int i,uRep,vRep;
     sort(G.begin(),G.end());
     for(int i = 0; i < G.size(); i++)
     {
         uRep = find_set(G[i].second.first);
         vRep = find_set(G[i].second.second);
         if(uRep != vRep)
         {
             T.push_back(G[i]);
             union_set(uRep,vRep);
         }
     }
 }

void Graph::print()
{
    cout << "Edge :" << "Weight" << endl;
    for(int i = 0; i < T.size();i++)
    {
         cout << T[i].second.first << " - " << T[i].second.second << " : "
       << T[i].first;
       cout << endl;
    } 
    int sum = 0; 
    for(int i = 0; i < T.size(); i++)
    {
        sum += T[i].first;
    }
    
    cout << "Sum of Weights =" << sum << endl;
}






int main() {

   Graph g(4);
   g.AddEdges(1, 3, 5);
   g.AddEdges(3, 1, 5);
   g.AddEdges(3, 4, 7);
   g.AddEdges(4, 3, 7);
   g.AddEdges(4, 2, 8);
   g.AddEdges(2, 4, 8);
   g.AddEdges(2, 1, 1);
   g.AddEdges(1, 2, 1);
   g.AddEdges(1, 4, 10);
   g.AddEdges(4, 1, 10);


  
  g.kruskal();
  g.print();
     

    return 0;
}