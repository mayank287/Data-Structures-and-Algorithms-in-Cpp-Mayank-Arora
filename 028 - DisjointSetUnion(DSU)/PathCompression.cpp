// Path Compression is Optimization Method of DSU done on Find Function 
// This Means we Make parent of Nodes Come In Between 

#include<iostream>
using namespace std;
#define n 5

int parent[n];
int ranks[n];

void initialize()
{
    for(int i = 0; i < n; i++)
    {
        parent[i] = i;
        ranks[i] = 0;
    }
}

// Path Compression Done Here
int find(int x)
{
    if(parent[x] == x) return x;
    parent[x] = find(parent[x]);
    return parent[x];
    
    
}

void unions(int x,int y)
{
    int x_rep = find(x);
    int y_rep = find(y);
    
    if(x_rep == y_rep) return;
    
    if(ranks[x_rep] < ranks[y_rep])
      parent[x_rep] = y_rep;
      
    else if(ranks[y_rep] < ranks[x_rep])
     parent[y_rep] = x_rep;
     
     else{
         parent[y_rep] = x_rep;
         ranks[x_rep]++;
     }
}

int main()
{
    initialize();
    unions(4,3);
    unions(3,4);
    
    cout << find(3) << endl;
    return 0;
}

// Time Complexity With union by rank and parh Compression
// For m Operations on n Elements 
// O(m alpha (n)) => alpha(n) <= 4 => alpha(n) is Inverse Ackermann Function
